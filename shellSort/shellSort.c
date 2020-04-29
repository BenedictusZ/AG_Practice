//
// Created by zhuzhengxing on 2020/4/10.
//
#include <stdlib.h>
#include <stdio.h>
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

//希尔排序 从小到大
void ShellSort(int arr[], int length) {

	int increasent = length;
	int i, j, k;
	do {
		//确定分组增量
		increasent = increasent / 3 + 1;
		for ( i = 0; i < increasent; i++ ) {
			for ( j = i + increasent; j < length; j += increasent ) {
				if ( arr[j] < arr[j - increasent] ) {
					int temp = arr[j];
					for ( k = j - increasent; k >= 0 && temp < arr[k]; k -= increasent ) {
						arr[k + increasent] = arr[k];
					}
					arr[k + increasent] = temp;
				}
			}
		}

	} while ( increasent > 1 );
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


int main() {
	int arr[MAX];
	int arr2[MAX];
	srand(( unsigned int ) time(NULL));
	for ( int i = 0; i < MAX; i++ ) {
		int randNum = rand() % MAX;
		arr[i] == randNum;
		arr2[i] == randNum;
	}

	PrintArray(arr, 10);
	ShellSort(arr, 10);
	PrintArray(arr, 10);

	return 0;
}


