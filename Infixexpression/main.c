//
// Created by zhuzhengxing on 2020/3/31.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ls.h"

//�ж��Ƿ�Ϊ����
int IsNumber(char c) {
	return c >= '0' && c <= '9';
}

void NumberOperate(char *p) {
	printf("%c", *p);
}

//�ж��ǲ���������
int IsLeft(char c) {
	return c == '(';
}

int IsRight(char c) {
	return c == ')';
}

//���ز����������ȼ�
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

//����MyChar
MyChar *CreateMyChar(char *p) {
	MyChar *mychar = ( MyChar * ) malloc(sizeof(MyChar));
	mychar->p = p;
	return mychar;
}

//�����Ų���
void LeftOperator(LinkStack *stack, char *p) {
	Push_LinkStack(stack, ( LinkNode * ) CreateMyChar(p));
}

//�����Ų���
void RightOperator(LinkStack *stack) {
	//���ж�ջ���Ƿ���Ԫ��
	while ( Size_LinkStack(stack) > 0 ) {
		MyChar *mychar = ( MyChar * ) Top_LinkStack(stack);
		//���ƥ�䵽������
		if ( IsLeft(*(mychar->p))) {
			Pop_LinkStack(stack);
			break;
		}
		printf("%c", *(mychar->p));
		//����
		Pop_LinkStack(stack);
		//�ͷ��ڴ�
		free(mychar);
	}
}

//�ж��ǲ����������
int IsOperator(char c) {
	return c == '+' || c == '-' || c == '*' || c == '/';
}

//������Ų���
void Operatoroperate(LinkStack *stack, char *p) {


	//��ȡ��ջ������
	MyChar *mychar = ( MyChar * ) Top_LinkStack(stack);
	if ( mychar == NULL) {
		Push_LinkStack(stack, ( LinkNode * ) CreateMyChar(p));
		return;
	}
	//���ջ�����ȼ����ڵ�ǰ�ַ������ȼ���ֱ����ջ
	if ( GetPrioty(*(mychar->p) < GetPrioty(*p))) {
		Push_LinkStack(stack, ( LinkNode * ) CreateMyChar(p));
		return;
	} else {//���ջ���������ȼ�����
		while ( Size_LinkStack(stack) > 0 ) {

			MyChar *mychar2 = ( MyChar * ) Top_LinkStack(stack);

			//������ȼ��ͣ���ǰ������ջ
			if ( GetPrioty(*(mychar2->p)) < GetPrioty(*p)) {
				Push_LinkStack(stack, ( LinkNode * ) CreateMyChar(p));
				break;
			}
			//���
			printf("%c", *(mychar2->p));
			//����
			Pop_LinkStack(stack);
			//�ͷ�
			free(mychar2);
		}
	}
}

int main() {
	char *str = "8+(3-1)/5";
	char *p = str;
	//����ջ
	LinkStack *stack = Init_LinkStack();

	while ( *p != '\0' ) {
		//���������
		if ( IsNumber(*p)) {
			NumberOperate(p);
		}
		//����������ţ�ֱ�ӽ�ջ
		if ( IsLeft(*p)) {
			LeftOperator(stack, p);
		}
		//������������
		if ( IsRight(*p)) {
			RightOperator(stack);
		}
		//������������
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

