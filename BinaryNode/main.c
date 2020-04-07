//
// Created by zhuzhengxing on 2020/4/6.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//TODO 求叶结点的数目
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
	Recursion(( BinaryNode * ) root->ch);
	//再遍历左子树
	Recursion(( BinaryNode * ) root->lchild);
	//再遍历右子树
	Recursion(( BinaryNode * ) root->rchild);
}

void CaculateLeafNum(BinaryNode *root, int *leafNum) {
	if ( root == NULL) {
		return;
	}

	if ( root->lchild == NULL && root->rchild == NULL) {
		(*leafNum)++;
	}
	//左子树叶子节点的数目
	CaculateLeafNum(root->lchild, leafNum);
	//右子树叶子结点的数目
	CaculateLeafNum(root->rchild, leafNum);
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
	node1.lchild = &node2;
	node1.rchild = &node6;
	node2.rchild = &node3;
	node3.lchild = &node4;
	node3.rchild = &node5;
	node6.rchild = &node7;
	node7.lchild = &node8;

	int leafNum = 0;
	CaculateLeafNum(&node1, &leafNum);
	printf("leaf node nums:\n", &leafNum);

};

int main() {

	CresteBinaryTree();

	return 0;
}
