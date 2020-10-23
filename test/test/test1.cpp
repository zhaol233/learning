#include<iostream>
#include"DeleteMin.hpp"
#include"LinkList.hpp"
#include"Stack.hpp"
#include"BiTree.hpp"


using namespace std;

int main()
{
    BiTree::BiTree T;
    BiTree::Initiate(T);
    //LinkList::test_linklist();
    std::cout<<T->rchild->data<<std::endl;
    BiTree::PreOrder(T);
    return 0;
}
