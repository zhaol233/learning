#include<iostream>
#include"DeleteMin.hpp"

using namespace std;

int main()
{
    SeqList L;
    InitList(L);
    L.data[0]=5;
    L.data[1]=3;
    L.data[2]=2;
    L.data[3]=0;
    L.data[4]=10;
    L.data[5]=100;
    L.length=6;
    
   
    for(int i=0;i<L.length;i++)
        std::cout<<L.data[i]<<std::endl;
    DeleteMin(L);
    std::cout<<"after"<<std::endl;
    for(int i=0;i<L.length;i++)
        std::cout<<L.data[i]<<std::endl;
    
    return 0;

}
