//
// Created by zhuzhengxing on 2020/4/8.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 10

long getSystemTime() {
	struct timeb tb;
	ftime(&tb);
	return tb.time * 100 + tb.millitm;
}

//交换函数
void Swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int flag = 0;// 0 标识没有排序好
//冒泡排序
void BubbleSort(int arr[], int length) {
	for ( int i = 0; i < length && flag == 0; i++ ) {
		flag = 1;//认为已经排序号
		for ( int j = length - 1; j > i; j-- ) {
			if ( arr[j - 1] < arr[j] ) {
				flag = 0;
				Swap(&arr[j - 1], &arr[j]);
			}
		}
	}
}

//打印函数
void PrintArray(int arr[], int length) {
	for ( int i = 0; i < length; i++ ) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[MAX];
	srand(( unsigned int ) time(NULL));
	for ( int i = 0; i < MAX; i++ ) {
		arr[i] = rand() % MAX;
	}

	//排序前
	printf("排序前\n");
	PrintArray(arr, MAX);
	long t_start = getSystemTime();
	BubbleSort(arr, MAX);
	long t_end = getSystemTime();
	PrintArray(arr, MAX);
	printf("排序后\n");
	printf("冒泡%d个元素，所需时间：%ldms \n", MAX, t_end - t_start);
}

