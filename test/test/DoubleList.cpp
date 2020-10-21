#ifndef DOUBLELIST_H
#define DOUBLELIST_H

#include"common.h"

namespace DoubleList{


/***
 * 双链表数据结构
 ***/
typedef struct DNode{
    ElemType data;
    DNode *head, *rear;
};




}  //namespace DoubleList


#endif 