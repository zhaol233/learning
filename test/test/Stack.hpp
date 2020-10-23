#ifndef STACK_H
#define STACK_H

#include"common.h"
namespace Stack{
typedef struct
{
    ElemType data[MaxSize];
    int top;
}SqStack;

/*
 * 顺序栈初始化  s.top = -1
 */
void InitStack(SqStack &s){
    s.top = -1;
}
/*
 * 判定栈是否为空
 */
bool StackEmpty(SqStack s){
    if(s.top == -1)
        return true;
    else
        return false;
}

/**
 * 进栈
 * */

bool Push(SqStack &s, ElemType x){
    if(s.top == MaxSize -1){
        std::cout<<"the stack is full"<<std::endl;
        return false;
    }
    s.data[++s.top] = x;
    return true;
}

/**
 * 出栈
 * */
bool Pop(SqStack &s,ElemType x){
    if(s.top == -1){
        std::cout<<"zhe stack is empty"<<std::endl;
        return false;
    }
    s.data[s.top--] = x;
    return true;
}

/**
 *取栈顶元素
 */
bool GetTop(SqStack &s,ElemType &x){
    if(s.top == -1){
        std::cout<<"the stack is empty"<<std::endl;
        return false;
    }
    x = s.data[s.top];
    return true;
}

// /***
//  * 共享栈入栈
// ***/
// bool ShareStackPopS1(SqStack &s1,SqStack &s2,ElemType x){
//     if(s2.top - s1.top ==2)
//         return false;
//     Pop(s1,x);
//     return true;
// }

// bool ShareStackPopS2(SqStack &s1,SqStack &s2,ElemType x){
//     if(s2.top - s1.top ==2)
//         return false;
//     s2.top--;
//     s2.top = x;
//     return true;
// }

void test_stack(){
    SqStack s;
    for(int i = 1;i<10;i++){
        Push(s,i);
        std::cout<<s.data[s.top]<<std::endl;
    }
    ElemType x;
    GetTop(s,x);
}

}//namespace Stack

#endif