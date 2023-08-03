

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

void preOrder(node *root){
	
	if(root == NULL){
		
		return;
	}

	printf("%d ", root->data);

	preOrder(root->left);

	preOrder(root->right);
}

void main(){
	
	node *root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	root->right->left = newNode(6);
	root->right->right = newNode(7);

	preOrder(root);

	printf("\n");
}
