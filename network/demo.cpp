#include<iostream>
#include<deque>
//#include<typeinfo>

using namespace std;

int main()
{
    cout
    deque<int> a;
    a.push_back(3);
    a.push_back(4);
    a.push_front(2);
    a.push_front(1);
    std::cout<<"ahfdoa"<<std::endl;
    for(size_t i = 0 ;i<a.size(); ++i)
    {
        cout <<a[i]<<endl;
    }
    //system("pause");
    return 0;
}