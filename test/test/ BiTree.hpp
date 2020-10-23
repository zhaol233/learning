#ifndef BITREE_H
#define BITREE_H
#include"common.h"

namespace BiTree{
/**
 * 二叉树的链式存储结构
 * */
typedef struct BiTNode{
    ElemType data;
    struct  BiTNode *lchild,*rchild;
}BiTNode, *BiTree;

/**
 * 线索二叉树
 * */
typedef struct ThreadNode{
    ElemType data;
    struct ThreadNode *lchild,*rchild;
    int ltag,rtag;
}TreadBNode,*ThreadTree;

/**
 * 树的顺序存储结构:双亲表示法
 * */
typedef struct{
    ElemType data;
    int parent;
}PTNode;
typedef struct{
    PTNode nodes[MaxSize];
    int n;
}PTree;

/**
 * 树的顺序存储结构:孩子表示法
 * */
typedef struct CSNode{
    ElemType data;
    struct CSNode *firstchild,*nextbling;
}CSNode,*CSTree;

/**
 * 二叉树的先序遍历
 * */
void PreOrder(BiTree &T){

}

/**
 * 二叉树的中序遍历
 * */
void Inorder(BiTree &T){

}

/**
 * 二叉树的后序遍历
 * */
void PostOrder(BiTree &T){

}

/**
 * 借助栈的二叉树的中序遍历
 * */
void InOrder2(BiTree &T){

}

/**
 * 二叉树的层次遍历
 * */
void LevelOrder(BiTree &T){

}
/**
 * 通过中序遍历对二叉树线索化的递归算法
 * */
void InThread(ThreadTree &p,ThreadTree &pre){

}

/**
 * 中序线索二叉树的遍历
 * */

/**
 * 二叉排序树
 * */



} //namespace BiTree

#endif