#ifndef SEQLIST_H
#define SEQLIST_H

#include<unistd.h>
#include<stdlib.h>
#include<iostream>

#define InitSize 100
typedef int DataType;  //顺序表数据类型
typedef struct SeqList
{
    DataType *data;
    int length,maxsize;
}SepList;

void InitList(SeqList &L){
    L.data = new DataType[InitSize];
    if(L.data == NULL){
        std::cout<<"存储分配失败"<<std::endl;
        exit(1);
    }
    L.length=0;
    L.maxsize=InitSize;
}
/***
 * 删除顺序表元素
 * 参数,顺序表L,第几个元素i
 ***/
bool Delete(SeqList &L,int i){
    if(i<0 || i>L.length)
        return false;
    //e = L.data[i-1];
    for(int j=i;j<L.length;j++){
        L.data[j-1]=L.data[j];
        
    }
    L.length--;
    return true;
}

bool Insert(SeqList &L,int i, DataType &e){
    if(L.length==L.maxsize){
        std::cout<<"顺序表储存空间已满"<<std::endl;
        return false;
    }
    if(i<0 || i>L.length){
        std::cout<<"下标超出范围"<<std::endl;
        return false;
    }

    for(int j=i;j<L.length;j++)
        L.data[j]=L.data[j-1];
    L.data[i-1]=e;
    L.length++;
    return true;
}



#endif