//
// Created by zhuzhengxing on 2020/4/6.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//TODO ���ŷ�����������
typedef struct BINARYNODE {
	char ch;
	struct BINARYNODE *lchild;
	struct BINARYNODE *rchild;
} BinaryNode;

void Recursion(BinaryNode *root) {
	if ( root == NULL) {
		return;
	}
	//��ӡ��
	printf("%c", root->ch);
	Recursion(root->lchild);
	Recursion(root->rchild);
}

BinaryNode *CreateBinaryTree() {
	fflush(stdin);  //�ȴ�������
	char ch;
	scanf("%c", &ch);

	BinaryNode *node;
	if ( ch == '#' ) {
		node = NULL;
	} else {
		node = ( BinaryNode * ) malloc(sizeof(BinaryNode));
		node->ch = ch;
		node->lchild = CreateBinaryTree();
		node->rchild = CreateBinaryTree();
	}
	return node;
}


int main() {
	//������
	BinaryNode *root = CreateBinaryTree();
	Recursion(root);
	return 0;
}
