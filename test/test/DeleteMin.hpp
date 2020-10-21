#ifndef DELETEMIN_H
#define DELETEMIN_H

#include"SeqList.hpp"
#include<iostream>

using namespace SqList;

extern SeqList L;

int DeleteMin(SeqList &L){
    if(L.length == 0)
        std::cout<<"顺序表为空"<<std::endl;
    ElemType e = L.data[0];
    
    int offset = 0;
    for(int i=1;i<=L.length;i++){
        if(L.data[i-1] < e){
            e = L.data[i-1];
            offset = i;
        }
    }   
    L.data[offset-1]=L.data[L.length-1];
    Delete(L,L.length);
    return e;
}

void testDeleteMin(){
    
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
        std::cout<<L.data[i];
    DeleteMin(L);
    std::cout<<"after delete";
    for(int i=0;i<L.length;i++)
        std::cout<<L.data[i];
}

void TestReverse(SeqList &L){
    //extern SeqList L;
    // SeqList L;
    // InitList(L);
    // L.data[0]=5;
    // L.data[1]=3;
    // L.data[2]=2;
    // L.data[3]=0;
    // L.data[4]=10;
    // L.data[5]=100;
    // L.length=6;
    for(int i=0;i<L.length;i++)
        std::cout<<L.data[i]<<',';
    Reverse(L);
    for(int i=0;i<L.length;i++)
        std::cout<<L.data[i]<<',';
    
}

void test_sqlist(){
    // SeqList L;
    // InitList(L);
    // L.data[0]=5;
    // L.data[1]=2;
    // L.data[2]=3;
    // L.data[3]=2;
    // L.data[4]=3;
    // L.data[5]=100;
    // L.length=6;
    // for(int i=0;i<L.length;i++)
    //     std::cout<<L.data[i]<<',';
    // //Reverse(L);
    // //Delete(L,3);

    // Delete_all_x(L,2);
    // Delete_all_x(L,3);
    // for(int i=0;i<L.length;i++)
    //     std::cout<<L.data[i]<<',';
}

#endif