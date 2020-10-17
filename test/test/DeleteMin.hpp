#ifndef DELETEMIN_H
#define DELETEMIN_H

#include"SeqList.hpp"
#include<iostream>
using namespace std;

int DeleteMin(SeqList &L){
    if(L.length == 0)
        cout<<"顺序表为空"<<endl;
    DataType e = L.data[0];
    
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

#endif