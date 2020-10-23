#ifndef QUEUE_H
#define QUEUE_H
#include"common.h"

/**
 * 顺序栈
 * */
typedef struct{
    ElemType data[MaxSize];
    int front,rear;
}SqQueue;

/**
 * 链式栈
 * */
typedef struct{
    ElemType data;
    struct LinkNode* next;
}LinkQueue;

#endif //queue.h