#ifndef STRING_H
#define STRING_H

#include"common.h"

namespace String{

/**
 * 串的顺序定长存储
 * */
typedef struct{
    char data[MaxSize];
    int length;
}SqString;

/**
 * 串的堆分配存储
 * */
typedef struct{
    char *data;
    int length;
}HString;

/**
 * 最小操作子集1:串赋值
 * */
bool StrAssign(SqString &T,ElemType x){

}
/**
 * 最小操作子集2:串比较
 * */
bool StrCompare(SqString &T1,SqString &T2){

}

/**
 * 最小操作子集3:求串长
 * */
int StrLength(SqString &T){

}

/**
 * 最小操作子集4:串联接
 * */
SqString Concat(SqString &T1,SqString &T2){

}

/**
 * 最小操作子集5:求字串
 * */
SqString SubString(SqString &T){

}

/**
 * 简单的模式匹配算法(暴力匹配)
 * arg1: 原SqString, 参数2: 模式串
 * */
int Index(SqString S,SqString T){

}

/**
 * KMP算法
 * arg1: 原SqString, 参数2: 模式串数组, 参数3: next
 * */
int Index_KMP(SqString &S,SqString &T,int next[]){

}

}//namespace String

#endif   //string.h
