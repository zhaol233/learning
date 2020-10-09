#!/usr/bin/python3 
# -*- coding: utf-8 -*-

from PIL import Image
import math
import os

#比较矢量相似度的类
class VectorCompare:
    #计算矢量大小，即求余弦的分母的元素
    def magnitude (self,concordance):
        total = 0
        for word,count in concordance.items():  #word像素点位置，count对应的颜色(0或255)
            total += count**2
        return math.sqrt(total)         #求出向量的模的大小

    #计算矢量的夹角
    def relation(self,concordance1,concordance2):   #输入两个字典化图片
        topvalue =0                                #求余弦公式的分子
        for word,count in concordance1.items():     #需要很好的数据预处理
            if word in concordance2:
                # 同一维度(像素点),两向量的颜色值(0或255)相乘，求出余弦公式分子
                topvalue += count *concordance2[word]
        all_magnitude = self.magnitude(concordance1)*self.magnitude(concordance2)   #求余弦公式的分母
        relevance = topvalue/all_magnitude      #求出余弦
        return relevance            #返回相关性

#图片转换成矢量，字典化图片
def buildvector(im):#参数是字符的图片
    d1 = {}         #字典记录像素点位置和对应的颜色
    count =0        #用来增加像素点位置
    for i  in im.getdata(): #i就是从0开始对应的颜色值
        d1[count] = i   #把颜色值作为值加入字典
        count +=1
    return d1       #返回{像素点位置：颜色}的字典

#实例化
v = VectorCompare()
#训练集名字
iconset = ['0','1','2','3','4','5','6','7','8','9',
           'a','b','c','d','e','f','g','h','i','j',
           'k','l','m','n','o','p','q','r','s','t',
           'u','v','w','x','y','z']

#加载训练集
imageset = []   #[{正确名字1：[s字典化图片]}, {正确名字2：[字典化图片]}, {正确名字3：[字典化图片]}。。。]
#字典化iconset里面图片
for letter in iconset:  #遍历iconset所有要训练的名字
    # os.listdir("/home/yg00a00020061814000n00/cpp_ws/python/7s9t9j/iconset/")
    for img in os.listdir("/home/yg00a00020061814000n00/cpp_ws/python/7s9t9j/iconset/%s/" %(letter)): #遍历所有iconset里面的文件夹
        temp = []       #列表用来记录字典化图片
        if img != "Thumbs.db" and img!= ".DS_Store":    #不需要训练的文件
            temp.append(buildvector(Image.open("/home/yg00a00020061814000n00/cpp_ws/python/7s9t9j/iconset/%s/%s"%(letter,img))))  #生成字典化图片
        imageset.append({letter:temp})  #将训练的名字和字典化图片再对应


# 加载图片并且转换成8位像素
im = Image.open("/home/yg00a00020061814000n00/cpp_ws/python/7s9t9j/captcha.gif")
im.convert("P")

# 构造一个纯白的等大小的图片im2
im2 = Image.new("P", im.size, 255)
# 遍历加载的图片，对每个像素点判断是否符合要求
for x in range(im.size[1]):  # im.size[1]是垂直像素数
    for y in range(im.size[0]):  # im.size[0]是水平像素数
        pix = im.getpixel((y, x))  # 获取每一个像素点的颜色纸
        if pix == 220 or pix == 227:  # 判断是否符合220或者227
            im2.putpixel((y, x), 0)  # 符合则变成黑色

# 分割图片
inletter = False  # 判断是否切割到了字符
foundletter = False  # 未切到字符的状态记录
start = 0  # 记录开始的x值
end = 0  # 记录结束的x值
letters = []  # 记录切割到的字符
# 纵向切割记录数据
for x in range(im2.size[0]):  # 遍历水平的像素点
    for y in range(im2.size[1]):  # 同一水平值下遍历垂直的（用刀切）
        pix = im2.getpixel((x, y))  # 获取像素点颜色
        if pix != 255:  # 碰到黑色就位切到了
            inletter = True
    # 切到但是刀的状态是没有切到，则转换刀的状态为切到
    if foundletter == False and inletter == True:
        foundletter = True
        start = x

    # 如果上面if没有成立，则下面的if不会发生，所以letters一定会记录到2个不同的值

    # 没有切到但是刀的状态是切到了，则转换刀的状态为未切到
    if foundletter == True and inletter == False:
        foundletter = False
        end = x
        letters.append((start, end))
    # 重置为未切到字符
    inletter = False

# 判断单个字符的相似度
str = ""  # 打印字符串
for letter in letters:
    im3 = im2.crop((letter[0], 0, letter[1], im.size[1]))
    guess = []  # 记录和所有训练集的数据，用来排序
    for image in imageset:  # 和所有训练集的数据进行遍历
        for x, y in image.items():  # x是正确名字，y是对应的[字典化图片]
            if len(y) != 0:  # y不为空,除去是Thumbs.db和.DS_Store训练出来的空列表
                guess.append((v.relation(y[0], buildvector(im3)), x))  # y[0]就是字典化图片
    guess.sort(reverse=True)  # 从大到小排序
    str += "{}".format(guess[0][1])  # 相似度最高的字符加到字符串里
    
print(str)