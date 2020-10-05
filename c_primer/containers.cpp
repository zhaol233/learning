/***
 * 1. 顺序容器的基础操作
 * *    1)容器定义的类型别名
 * *    2)begin 和end的成员
 * 2. 在顺序容器中添加元素
 *      1)push_back()
 *      2)push_front()
 *      3)insert(p,t)
 *      4)insert(p,t1,t2)
 *      5)insert(p,n,t)
***/

#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;

int main()
{
    vector<int> a;
    list<int> b;
    deque<int> c;

    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    const vector<int> ca(a);

    b.push_back(100);
    b.push_back(200);
    b.push_back(300);

    c.push_back(1);
    c.push_back(2);
    c.push_back(3);

    for(vector<int>::size_type i=0; i<a.size();++i)          //i不要用int 
        cout<<a[i]<<endl;

    // for(list<int>::size_type k=0;k<b.size();++k)             //list  链表没有下标,只能用迭代器
    //     cout<<b[k]<<endl;

    for(deque<int>::size_type n=0;n<c.size();++n)
        cout<<c[n]<<endl;

    // vector<int>::iterator firsta = a.begin();  //第一个
    // vector<int>::iterator lasta = a.end();     //最后一个的下一个
    //cout<<*firsta<<endl;

    // vector<int>::reverse_iterator afirst = a.rbegin();
    // cout<<*afirst<<endl;

    // vector<int>::const_iterator cfirst = ca.begin();
    // cout<<*cfirst<<endl;

    //vector
    vector<int>::size_type              a1;    //
    vector<int>::iterator               a2;    //迭代器
    vector<int>::const_iterator         a3;    //常迭代器
    vector<int>::reverse_iterator       a4;    //逆序迭代器
    vector<int>::const_reverse_iterator a5;    //常逆序迭代器
    vector<int>::difference_type        a6;
    // vector<into>::value_type             a7;
    // vector<int>::reference              a8;
    // vector<int>::const_reference        a9;     //
    
    list<int>::size_type                b1;
    list<int>::iterator                 b2;   
    list<int>::const_iterator           b3;
    list<int>::reverse_iterator         b4;
    list<int>::const_reverse_iterator   b5;
    list<int>::difference_type          b6;
    // list<int>::value_type               b7;
    // list<int>::reference                b8;
    // list<int>::const_reference          b9;

    deque<int>::size_type               c1;
    deque<int>::iterator                c2;
    deque<int>::const_iterator          c3;
    deque<int>::reverse_iterator        c4;
    deque<int>::const_reverse_iterator  c5;
    deque<int>::difference_type         c6;
    // deque<int>::value_type              c7;
    // deque<int>::reference               c8;
    // deque<int>::const_reference         c9;
}