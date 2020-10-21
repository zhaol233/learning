#ifndef SEQLIST_H
#define SEQLIST_H

#include<unistd.h>
#include<stdlib.h>
#include<iostream>

#define InitSize 100
namespace SqList{
    
typedef int ElemType;  //顺序表数据类型

typedef struct SeqList 
{
    ElemType *data;
    int length,maxsize;
}SepList;

void InitList(SeqList &L){
    L.data = new ElemType[InitSize];
    if(L.data == NULL){
        std::cout<<"存储分配失败"<<std::endl;
        exit(1);
    }
    L.length=0;
    L.maxsize=InitSize;
}
/***
 * 删除顺序表元素
 * 参数,顺序表L,第几个元素i(元素下标)
 ***/
bool Delete(SeqList &L,int i){
    if(i<0 || i>L.length)
        return false;
    //e = L.data[i-1];
    for(int j=i;j<L.length;j++){
        L.data[j]=L.data[j+1];
    }
    L.length--;
    return true;
}

bool Insert(SeqList &L,int i, ElemType &e){
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

/***
 * 升序排列顺序表

 ***/

// void Sort(SeqList& L){
//     for(int i=1;i<L.length;i++){
//         if(L.data[i]<L.data[i-1]){
//             ElemType temp=L.data[i];
//             for(int j=i-1;L.data[j-1]<L.data[j];--j)
//                 L.data[j-1]=L.data[j];    
//         }
//     }
// }

void Reverse(SeqList &L){
    for(int i=0;i<=L.length/2;i++){
        ElemType temp;
        temp = L.data[i];
        L.data[i]=L.data[L.length-i-1];
        L.data[L.length-i-1]=temp;
    }
}

void Delete_all_x(SeqList &L,ElemType x){
    for(int i=0;i<L.length;i++){
        if(L.data[i]==x){
            Delete(L,i);
            i=i-1;
        }
    }
}

// SeqList& ListMerage(SeqList& L1,SeqList& L2){
//     for(int i=L1.length;i)
// }

}//namespace SqList

#endif