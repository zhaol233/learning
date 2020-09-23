#include<iostream>
#include<deque>
#include<algorithm>

#include<list>

#include<stack>
#include<vector>

using namespace std;
/*
001  deque 可以从前从后添加删除数据  --队列  
002  list  容器  迭代器
    插入:直接插入.迭代器插入,insert插入 会返回一个迭代器
    删除:直接删除.迭代器删除  erase  用迭代器删除        --链表
    排序和反转:sort  reverse
003 stack  堆栈  后进先出   没有迭代器
push()
pop()
size
enpty
004 queue  没有迭代器     普通队列--先进先出
005 优先级队列priority_queue   --最大值,永远在最前面  可以用deque vector    
priority_queue<int, vector<int>> pq;
006 顺序容器  vector  list  deque
    顺序容器适配器    stack queue priority_queue
007 迭代器
*/
int deque_test()
{
    
    deque<int> a;

    a.push_back(2);   //在队列后添加
    a.push_back(3);
    a.push_front(1);
    a.push_front(0);   //在队列前添加
     //pop_back()   从后面删除
     //pop_front()
    for(size_t i=0; i<a.size(); ++i)
    {
        cout<<a[i]<<endl;
    }
    deque<int>::iterator iElementLocator;
    
    for(iElementLocator = a.begin();
        iElementLocator !=a.end();
        ++iElementLocator)
        {
            //cout << *iElementLocator <<endl;
            size_t offset = distance(a.begin(),iElementLocator);
            cout<<"a["<<offset<<"]="<<*iElementLocator<<endl;
        }
}

int list_test()
{
    using namespace std;
    list<int> a,b;
    b.push_back(100);
    b.push_back(200);
    b.push_back(300);

    a.push_front(0);
    a.push_front(1);
    a.push_front(3);
    a.push_front(4);


    a.insert(a.begin(),10);  //用迭代器在前面插入一个10
    a.insert(a.end(),4,20);    //在后面插入4个20
    a.insert(a.begin(),b.begin(),b.end());  //插入list b 到a中;
    a.sort();
    a.reverse();   
    //a.erase(a.begin(),a.end());
    std::list<int>::iterator iter;
    for(iter = a.begin(); iter != a.end(); ++iter)
    {
        cout<<*iter<<endl;
    }
    
}

int stack_test()
{
    //stack<int,deque<int>> a;
    //stack<int,vector<int>> b;
    //stack<int,list<int>> c;
    stack<int> d;

    d.push(25);
    d.push(10);
    d.push(1);
    d.push(5);
    int x=d.top() ;  //查看数据,返回到x里
    d.pop();  //删除

    cout<< x << d.size() << endl;

}

class Dog
{

};

class Cat
{

};

int test_all()
{
    vector<string> svec;   //默认的构造函数
    svec.push_back("hello");
    svec.push_back("zhao");
    svec.push_back("liang");
    vector<Dog> dogvec;
    list<Cat> catlist;
    deque<Dog> dog_deque;

    vector<int> ivec;  //默认的构造函数
    ivec.push_back(1);
    ivec.push_back(2);
    ivec.push_back(3);
    vector<int> ivec2(ivec);   //有参数的构造函数
    
    //list<int>  ilist(ivec)   --不可以转换,同种类型顺序容器才可以初始化
    list<string> slint(svec.begin(),svec.end());   
    vector<string>::iterator mid = svec.begin()+ svec.size()/2;
    deque<string> font(svec.begin(),mid);        //可以用迭代器初始化

    char* words[]= {"zhao","liang","hello","world"};
    size_t words_size = sizeof(words) / sizeof(char *);
    list<string> word(words,words+words_size);
    list<string> slist(64,"hello");
    list<int> ilint(64);

    //vector<int> 
}

int main()
{
    //list_test();
    //stack_test();
    test_all();
    cout<<"good"<<endl;
    
    return 0;
}
