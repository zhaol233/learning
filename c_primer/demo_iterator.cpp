/***
1.编写一个函数,其形参是一对迭代器,查找指定的值,返回布尔值
2.重写一个函数,形参是一对迭代器,查找指定的值,返回迭代器
3.编写一个程序,获取string,变成迭代器,并输出
4.编写一个程序,获取list,变成迭代器,并输出
***/
#include<iostream>
#include<vector>
#include<string>
#include<list>

using namespace std;

bool findInt1(vector<int>::iterator beg, vector<int>::iterator end, int val);

vector<int>::iterator findInt2(vector<int>::iterator beg, vector<int>::iterator end, int val);

int main()
{
    //test findInt1
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(8);
    a.push_back(14);
    a.push_back(19);

    vector<int>::iterator k1=a.begin();
    k1++;
    vector<int>::iterator k2=a.end();    //a.end()指向a的最后一个的下一个,前包后不包;  
    k2--;

    bool result = findInt1(k1,k2,19);
    cout<<"是否找到"<<result<<endl;

    //test findInt2
    int ia[]={0,1,2,3,4,5,6};
    vector<int> ivec(ia,ia+7);   //迭代器的构造函数
    vector<int>::iterator result2 = findInt2(ivec.begin(),ivec.end(),50);
    cout<<"是否找到"<<*result2<<endl;

    // //practice 3
    // vector<string> svec;  //string 型容器
    // string str;           //将str 的内容push_back进svec
    // cout<<"Enter some strings(Ctrl+D to end)"<<endl;
    // while( cin>> str)  //输入迭代器
    //     svec.push_back(str);

    // for(vector<string>::iterator iter = svec.begin();  //输出迭代器
    //     iter != svec.end();
    //     ++iter)
    //     cout<<*iter<<endl;

    //prcatice 4
    list<string> slst;
    string str;
    cout<<"Enter some strings(Ctrl+D to end)"<<endl;
    while( cin>> str)  //输入迭代器
        slst.push_back(str);
    
    for(list<string>::iterator iter = slst.begin();  //输出迭代器
        iter != slst.end();
        ++iter)
        cout<<*iter<<endl;


    return 0;
}

//在两个迭代器中找指定值,[k1,k2)
bool findInt1(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    while(beg != end)
    {
        if(*beg == val)
            break;
        else
            ++beg;
    }
    if(beg != end)
        return true;
    else
    return false;
}

vector<int>::iterator findInt2(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    while(beg != end)
    {
        if(*beg == val)
            break;
        else
            ++beg;
    }
    return beg;
    // if(beg != end)
    //     return ;
    // else
    //     return false;
}