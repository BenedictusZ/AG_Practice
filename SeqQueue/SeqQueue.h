//
// Created by zhuzhengxing on 2020/3/28.
//

#ifndef AG_PRACTICE_SEQQUEUE_H
#define AG_PRACTICE_SEQQUEUE_H
#define MAX_SIZE 1024

#include <stdio.h>
#include <stdlib.h>

//顺序队列结构体
typedef struct SEQQUEUE {
	void *data[MAX_SIZE];
	int size;
} SeqQueue;

//初始化
SeqQueue *Init_SeqQueue();

//入队
void Push_SeqQueue(SeqQueue *queue, void *data);

//返回队头元素
void *Front_SeqQueue(SeqQueue *queue);

//出队
void Pop_SeqQueue(SeqQueue *queue);

//返回队尾元素
void *Back_SeqQueue(SeqQueue *queue);

//返回大小
int Size_SeqQueue(SeqQueue *queue);

//清空队列
void Clear_SeqQueue(SeqQueue *queue);

//销毁
void FreeSpace_SeqQueue(SeqQueue *queue);


#endif //AG_PRACTICE_SEQQUEUE_H
