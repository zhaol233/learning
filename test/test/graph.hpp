#ifndef GRAPH_H
#define GRAPH_H

#include"common.h"
#include"test1.cpp"

typedef int EdgeType;                     //带权图边的权值的数据类型
typedef char VertexType;                  //顶点的数据类型
namespace Graph{
class graph
{
public:
    /*临接矩阵表示法*/
    typedef struct{
        VertexType Vex[MaxSize];              //顶点表
        EdgeType Edge[MaxSize][MaxSize];      //临接矩阵,边表
        int vexnum, arcnum;                   //图的当前顶点数和弧数
    }MGraph;
    /*邻接表表示法--边表节点*/
    typedef struct ArcNode{
        int adjvex;                           //该弧指向的顶点的位置
        struct  Acrnode* next;                //指向下一条弧的指针
        //InfoType                            //边的权值
    };
    /*临接表表示法--顶点表节点*/
    typedef struct VNode{
        VertexType data;                      //顶点信息
        ArcNode *first;                       //指向第一条依附该顶点的弧的指针
    }VNode,AdjList[MaxSize];
    /*临接表*/
    typedef struct{
        AdjList vertives;                       
        int vexnum,arcnum;                    //图的当前顶点数和弧数
    }ALGraph;

    /*十字链表表示法*/
     
    /*邻接多重表*/

    /*breadth-first-search,BFS*/
    
    /*BFS求路径最短问题*/
    graph();
    ~graph();
}; 

    
}    //namespace graph

#endif  