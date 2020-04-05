//
// Created by zhuzhengxing on 2020/3/31.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ls.h"

//判断是否为数字
int IsNumber(char c) {
	return c >= '0' && c <= '9';
}

void NumberOperate(char *p) {
	printf("%c", *p);
}

//判断是不是左括号
int IsLeft(char c) {
	return c == '(';
}

int IsRight(char c) {
	return c == ')';
}

//返回操作符号优先级
int GetPrioty(char c) {
	if ( c == '*' || c == '/' ) {
		return 2;
	}
	if ( c == '+' || c == '-' ) {
		return 1;
	}
	return 0;
}


typedef struct MYCHAR {
	LinkNode node;
	char *p;
} MyChar;

//创建MyChar
MyChar *CreateMyChar(char *p) {
	MyChar *mychar = ( MyChar * ) malloc(sizeof(MyChar));
	mychar->p = p;
	return mychar;
}

//左括号操作
void LeftOperator(LinkStack *stack, char *p) {
	Push_LinkStack(stack, ( LinkNode * ) CreateMyChar(p));
}

//右括号操作
void RightOperator(LinkStack *stack) {
	//先判断栈中是否有元素
	while ( Size_LinkStack(stack) > 0 ) {
		MyChar *mychar = ( MyChar * ) Top_LinkStack(stack);
		//如果匹配到左括号
		if ( IsLeft(*(mychar->p))) {
			Pop_LinkStack(stack);
			break;
		}
		printf("%c", *(mychar->p));
		//弹出
		Pop_LinkStack(stack);
		//释放内存
		free(mychar);
	}
}

//判断是不是运算符号
int IsOperator(char c) {
	return c == '+' || c == '-' || c == '*' || c == '/';
}

//运算符号操作
void Operatoroperate(LinkStack *stack, char *p) {


	//先取出栈顶符号
	MyChar *mychar = ( MyChar * ) Top_LinkStack(stack);
	if ( mychar == NULL) {
		Push_LinkStack(stack, ( LinkNode * ) CreateMyChar(p));
		return;
	}
	//如果栈顶优先级低于当前字符的优先级，直接入栈
	if ( GetPrioty(*(mychar->p) < GetPrioty(*p))) {
		Push_LinkStack(stack, ( LinkNode * ) CreateMyChar(p));
		return;
	} else {//如果栈顶符号优先级不低
		while ( Size_LinkStack(stack) > 0 ) {

			MyChar *mychar2 = ( MyChar * ) Top_LinkStack(stack);

			//如果优先级低，当前符号入栈
			if ( GetPrioty(*(mychar2->p)) < GetPrioty(*p)) {
				Push_LinkStack(stack, ( LinkNode * ) CreateMyChar(p));
				break;
			}
			//输出
			printf("%c", *(mychar2->p));
			//弹出
			Pop_LinkStack(stack);
			//释放
			free(mychar2);
		}
	}
}

int main() {
	char *str = "8+(3-1)/5";
	char *p = str;
	//创建栈
	LinkStack *stack = Init_LinkStack();

	while ( *p != '\0' ) {
		//如果是数字
		if ( IsNumber(*p)) {
			NumberOperate(p);
		}
		//如果是左括号，直接进栈
		if ( IsLeft(*p)) {
			LeftOperator(stack, p);
		}
		//若果是右括号
		if ( IsRight(*p)) {
			RightOperator(stack);
		}
		//如果是运算符号
		if ( IsOperator(*p)) {
			Operatoroperate(stack, p);
		}
		p++;
	}
	while ( Size_LinkStack(stack) > 0 ) {
		MyChar *mychar = ( MyChar * ) Top_LinkStack(stack);
		printf("%c", *(mychar->p));
		Pop_LinkStack(stack);
		free(mychar);
	}

	printf("\n");
	system("pause");
	return 0;
}

