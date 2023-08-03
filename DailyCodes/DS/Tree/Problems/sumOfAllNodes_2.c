
//	1 - Count Nodes in BT

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	
	int data;
	struct Node *left;
	struct Node *right;
}node;

node *newNode(int value){
	
	node *newNode = (node*)malloc(sizeof(node));

	newNode->data = value;

	newNode->left = NULL;

	newNode->right = NULL;

	return newNode;	
}

int sumNodes(node *root){
	
	if(root == NULL){
		
		return 0;
	}

	int leftSum = sumNodes(root->left);
	int rightSum = sumNodes(root->right);

	return leftSum + rightSum + root->data;
}

void main(){
	
	node *root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	root->right->left = newNode(6);
	root->right->right = newNode(7);

	int ret = sumNodes(root);

	printf("%d\n", ret);
}
