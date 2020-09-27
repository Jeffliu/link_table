

#include<string.h>
#include<ctype.h>
#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1

typedef int Status;
typedef int Boolean;

typedef int ElemType;

struct LNode
{
    ElemType data;
    LNode *next;
};
typedef LNode * LinkList;


int ListLength(LinkList L);
Status GetElem(LinkList L,int i,ElemType &e);
int LocateElem(LinkList L,ElemType e,Status(*compare)(ElemType,ElemType));
Status PriorElem(LinkList L,ElemType cur_e,ElemType &pre_e);
Status NextElem(LinkList L,ElemType cur_e,ElemType &next_e);
Status ListInsert(LinkList L,int i,ElemType e);
Status ListTraverse(LinkList L,void(*vi)(ElemType));
Status ListDelete(LinkList L,int i,ElemType &e);
Status InitList(LinkList &L);
