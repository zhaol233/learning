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

void InitQueue(SqQueue q)
{
    q.front = q.rear = 0;
}
/*进队操作*/
bool EnQueue(SqQueue q,ElemType v){
    if((q.rear+1) % MaxSize == q.front)
        return false;
    q.data[q.rear] = v;
    q.rear = (q.rear + 1) % MaxSize;
    return true;
}
/*出队操作*/
bool DeQueue(SqQueue q,ElemType v){
    if(q.rear == q.front) return false;
    v = q.data[q.front];
    q.front = (q.front + 1) % MaxSize;
    return true;
}

/*判队空*/
bool IsEmpty(SqQueue q){
    if(q.front == q.rear)
        return true;
    else 
        return false;
}
#endif //queue.h