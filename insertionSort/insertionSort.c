//
// Created by zhuzhengxing on 2020/4/9.
//
#include <stdio.h>
#include <stdlib.h>
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

//打印函数
void PrintArray(int arr[], int length) {
	for ( int i = 0; i < length; i++ ) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//插入排序
void insertSort(int arr[], int length) {
	int j;
	for ( int i = 1; i < length; i++ ) {
		if ( arr[i] < arr[i - 1] ) {
			int temp = arr[i];
			for ( j = i - 1; j >= 0 && temp < arr[j]; j-- ) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}


int main() {
	int arr[MAX];
	srand(( unsigned int ) time(NULL));
	for ( int i = 0; i < MAX; i++ ) {
		arr[i] = rand() % MAX;
	}
	PrintArray(arr, MAX);
	insertSort(arr, MAX);
	PrintArray(arr, MAX);

	return 0;
}
