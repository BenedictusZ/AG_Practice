//
// Created by zhuzhengxing on 2020/4/11.
//
#include <stdlib.h>
#include <stdio.h>


void PrintArray(int arr[], int length) {
	for ( int i = 0; i < length; i++ ) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//快速排序 从小到大
void quickSort(int arr[], int start, int end) {
	int i = start;
	int j = end;
	//基准
	int temp = arr[start];
	if ( i < j ) {
		//从右往左寻找比基准数小的
		while ( i < j && arr[j] >= temp ) {
			j--;
		}
		//填坑
		if ( i < j ) {
			arr[i] = arr[j];
			i++;
		}
		//从左向右 找比基准数大的数
		while ( i < j && arr[i] < temp ) {
			i++;
		}
		//填坑
		if ( i < j ) {
			arr[j] = arr[i];
			j--;
		}
	}
	//把基准放到i=j的位置
	arr[i] = temp;
	//对左半部分进行快速偶爱徐
	quickSort(arr, start, i - 1);
	//对左半部分进行快速偶爱徐
	quickSort(arr, i + 1, end);
}

int main() {
	int myArr[] = {4, 2, 8, 0, 7, 1, 3, 9};
	int len = sizeof(myArr) / sizeof(int);
	PrintArray(myArr, len);
	quickSort(myArr, 0, len - 1);
	PrintArray(myArr, len);

	return 0;
}