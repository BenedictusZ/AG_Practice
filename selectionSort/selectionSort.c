//
// Created by zhuzhengxing on 2020/4/9.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>

#define MAX 100000

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

//打印函数
void PrintArray(int arr[], int length) {
	for ( int i = 0; i < length; i++ ) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//选择排序
void selectSort(int arr[], int length) {
	//选择排序减少交换次数
	for ( int i = 0; i < length; i++ ) {
		int min = i;
		for ( int j = i + 1; j < length; j++ ) {
			if ( arr[j] < arr[min] ) {
				min = j;
			}
		}
		if ( min != i ) {
			Swap(&(arr[min]), &(arr[i]));
		}
	}
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


int main() {
	int arr[MAX];
	int arr2[MAX];
	srand(( unsigned int ) time(NULL));
	for ( int i = 0; i < MAX; i++ ) {
		int randNum = rand() % MAX;
		arr[i] == randNum;
		arr2[i] == randNum;
	}

	//冒泡
	long tbubble_start = getSystemTime();
	BubbleSort(arr, MAX);
	long tbubble_end = getSystemTime();
	printf("BubbleSort %d nums,need %ld ms\n", MAX, tbubble_end - tbubble_start);

	//选择
	long tselsect_start = getSystemTime();
	selectSort(arr2, MAX);
	long tselect_end = getSystemTime();
	printf("selectSort %d nums,need %ld ms", MAX, tselect_end - tselsect_start);

	return 0;
}

