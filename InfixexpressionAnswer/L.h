//
// Created by zhuzhengxing on 2020/4/4.
//
//TODO 栈的链式存储
#include <stdlib.h>
#include <stdio.h>

//链式栈的结点
typedef struct LINKNODE {
	struct LINKNODE *next;
} LinkNode;

//链式栈
typedef struct LINKSTACK {
	LinkNode head;
	int size;
} LinkStack;

//初始化函数
LinkStack *Init_LinkStack();

//入栈
void Push_LinkStack(LinkStack *stack, LinkNode *data);

//出栈
void Pop_LinkStack(LinkStack *stack);

//返回栈顶元素
LinkNode *Top_LinkStack(LinkStack *stack);

//返回栈元素个数
int Size_LinkStack(LinkStack *stack);

//清空栈
void Clear_LinkStack(LinkStack *stack);

//销毁栈
void Free_LinkStack(LinkStack *stack);

