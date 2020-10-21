#ifndef LINKLIST_H
#define LINKLIST_H

#include<iostream>


namespace LinkList{

//typedef  int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode *next;  
}LNode,*LinkList;
/***
 * 头插法建立单链表,输入的链表作为头指针
 ***/
LinkList List_HeaderInsert(LinkList &head){
    LNode *s;int x;
    head = (LinkList)malloc(sizeof(LNode));
    head->next = NULL;
    std::cout<<"enter value "<<": (enter 99 to stop)";
    std::cin >> x;
    int i=1;
    while(x != 99){
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = head->next;
        head->next = s;
        std::cout<<"enter value "<<i<<": (enter 99 to stop)";
        std::cin >> x;
        i++;
    }
    return head;
}
/***
 * 尾插法建立单链表
 ***/
LinkList List_TailInsert(LinkList &head){
    head = (LinkList)malloc(sizeof(LNode));
    LNode *s,*rear = head; 
    int x;
    std::cout<<"enter value "<<": (enter 999 to stop)";
    std::cin >> x;
    int i=1;
    while(x != 99){
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        rear->next = s;
        rear = s;
        std::cout<<"enter value "<<i<<": (enter 999 to stop)";
        std::cin >> x;
        i++;
    }
    rear->next=NULL;
    return head;
}
/***
 * 求单链表长度
 ***/
int GetLength(LinkList &L){
    LNode *p=L->next;
    int i;
    while (p){
        p = p->next;
        i++;
    }
    return i;
}
/***
 * 求链表L的下标为i 的值
 * ***/
LNode *GetElem(LinkList &L,int i){
    int j = 1;
    LNode *p = L->next;
    if(i == 0)
        return L;
    if(i<1)
        return NULL;
    while( p && j<i){
        p = p->next;
        j++;
    }
    return p;
}
/***
 * 链表测试程序
 * ***/
void test_linklist(){
    LinkList::LinkList L;
    LinkList::List_HeaderInsert(L);
    std::cout<<GetLength(L)<<std::endl;
    int j=1;
    std::cout << GetElem(L,j) <<",";
    // while(j < LinkList::GetLength(L)){
    //     std::cout << GetElem(L,j)->data<<",";
    // }
}

}//namespace LinkList


#endif