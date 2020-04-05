//
// Created by zhuzhengxing on 2020/3/30.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LS.h"

typedef struct MyChar {
	LinkNode node;
	char *pAddress;
	int index;
} MyChar;

int IsLeft(char c) {
	return c == '(';
}

int IsRight(char c) {
	return c == ')';
}

MyChar *CreatemyChar(char *p, int index) {
	MyChar *mychar = ( MyChar * ) malloc(sizeof(MyChar));
	mychar->pAddress = p;
	mychar->index = index;
	return mychar;
}

void ShowError(char *str, int pos) {
	printf("%s\n", str);
	for ( int i = 0; i < pos; i++ ) {
		printf(" ");
	}
	printf("A");
}

int main() {
	char *str = "1+2+6(dsf)lp(sds)";
	//����ջ����
	LinkStack *stack = Init_LinkStack();

	char *p = str;
	int index = 0;
	while ( *p != '\0' ) {
		//��������š�ֱ�ӽ�ջ
		if ( IsLeft(*p)) {
			Push_LinkStack(stack, ( LinkNode * ) CreatemyChar(p, index));
		}
		//����������ţ���ջ������Ԫ�أ��ж��ǲ���������
		if ( IsRight(*p)) {
			if ( Size_LinkStack(stack) > 0 ) {
				MyChar *mychar = ( MyChar * ) Top_LinkStack(stack);
				if ( IsLeft(*(mychar->pAddress))) {
					Pop_LinkStack(stack);
					free(mychar);
				}
			} else {
				printf("������û��ƥ���������:\n");
				ShowError(str, index);
				break;
			}
		}
		p++;
		index++;
	}

	while ( Size_LinkStack(stack) > 0 ) {
		MyChar *mychar = ( MyChar * ) Top_LinkStack(stack);
		printf("������û��ƥ��������ţ�\n");
		ShowError(str, mychar->index);
		Pop_LinkStack(stack);
	}
	printf("\n");

	system("pause");
	return 0;
}
