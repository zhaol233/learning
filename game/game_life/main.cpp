#include<windows.h>
#include<string>
#include<sstream>

using namespace std;

extern void setTitle(string title);
extern void setColor(char bgcolor,char fgcolor);

int main()
{
    //1.控制台标题设置
    //setTitle(string("zhaoliang"));
    string str = "title zhoaliang";
    system("title zhoaliang");
    //2.设置背景色和前景色；
    /*
    0-黑色,1-蓝色,2-绿色,3-浅绿色,4-红色,5-紫色,6-黄色,7-白色,8-灰色
    9- 浅蓝色,10(A)-浅绿色,11(B)-淡浅绿色,12(C)-淡红色,13(D)-淡紫色,14(E)-淡红色,15(F)-亮白色)
    命令 color + 背景色16进制 + 前景色 16 进制
    */
   //system("color 1F");
   //setColor("color 1F")
    return 0;
}

void setTitle(string title)
{
    stringstream cmd;
    //cmd<<"title";
    cmd<<title ;
    //命令 title + "标题"
    system(cmd.str().c_str());   //字符串转换为指针类型
}

void setColor(char bgcolor,char fgcolor)
{

}