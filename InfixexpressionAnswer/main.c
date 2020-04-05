//
// Created by zhuzhengxing on 2020/4/4.
//

#include "stdio.h"
#include <stdlib.h>
#include <string.h>
#include "L.h"

int IsNumber2(char c) {
	return c >= '0' && c <= '9';
}

typedef struct MyNum {
	LinkNode node;
	int val;
} MyNum;

int Calculate(int left, int right, char c) {
	int ret = 0;
	switch ( c ) {
		case '+':
			ret = left + right;
			break;
		case '-':
			ret = left - right;
			break;
		case '*':
			ret = left * right;
			break;
		case '/':
			ret = left / right;
			break;
		default:
			break;
	}
	return ret;
}

int main(void) {
	char *str = "831-5*+";
	char *p = str;

	//创建栈
	LinkStack *stack = Init_LinkStack(stack);

	while ( *p != '\0' ) {
		//如果是数字 直接入栈
		if ( IsNumber2(*p)) {
			MyNum *num = ( MyNum * ) malloc(sizeof(MyNum));
			num->val = *p - '0';

			Push_LinkStack(stack, ( LinkNode * ) num);
		} else {
			//先从栈中弹出右操作数
			MyNum *right = ( MyNum * ) Top_LinkStack(stack);
			int rightNum = right->val;
			Pop_LinkStack(stack);
			free(right);
			//取出左操作数
			MyNum *left = ( MyNum * ) Top_LinkStack(stack);
			int leftNum = left->val;
			Pop_LinkStack(stack);
			free(left);

			int ret = Calculate(leftNum, rightNum, *p);
			//结果入栈
			MyNum *num = ( MyNum * ) malloc(sizeof(MyNum));
			num->val = ret;
			Push_LinkStack(stack, ( LinkNode * ) num);
		}
		p++;
	}
	if ( Size_LinkStack(stack) == 1 ) {
		MyNum *num = ( MyNum * ) Top_LinkStack(stack);
		printf("运算结果：%d\n", num->val);
		Pop_LinkStack(stack);
		free(num);
	}
	Free_LinkStack(stack);
	return 0;
}

