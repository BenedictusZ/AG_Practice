//
// Created by zhuzhengxing on 2020/4/6.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BinaryNode {
	char ch;
	struct BINARYNODE *lchild;
	struct BINARYNODE *rchild;
} BinaryNode;

//递归遍历
void Recursion(BinaryNode *root) {
	if ( root == NULL) {
		return;
	}

	//访问根结点
	printf("%c", root->ch);
	//再遍历左子树
	Recursion(( BinaryNode * ) root->lchild);
	//再遍历右子树
	Recursion(( BinaryNode * ) root->rchild);

}

void CresteBinaryTree() {

	//创建节点
	BinaryNode node1 = {'A', NULL, NULL};
	BinaryNode node2 = {'B', NULL, NULL};
	BinaryNode node3 = {'C', NULL, NULL};
	BinaryNode node4 = {'D', NULL, NULL};
	BinaryNode node5 = {'E', NULL, NULL};
	BinaryNode node6 = {'F', NULL, NULL};
	BinaryNode node7 = {'G', NULL, NULL};
	BinaryNode node8 = {'H', NULL, NULL};

	//建立节点关系
	node1.lchild = ( struct BINARYNODE * ) &node2;
	node1.rchild = ( struct BINARYNODE * ) &node6;
	node2.rchild = ( struct BINARYNODE * ) &node3;
	node3.lchild = ( struct BINARYNODE * ) &node4;
	node3.rchild = ( struct BINARYNODE * ) &node5;
	node6.rchild = ( struct BINARYNODE * ) &node7;
	node7.lchild = ( struct BINARYNODE * ) &node8;

	//递归遍历
	Recursion(&node1);
	printf("\n");

};

int main() {

	CresteBinaryTree();

	return 0;
}
