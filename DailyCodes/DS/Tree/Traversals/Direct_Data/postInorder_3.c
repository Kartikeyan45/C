

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

void postOrder(node *root){
	
	if(root == NULL){
		
		return;
	}

	postOrder(root->left);

	postOrder(root->right);

	printf("%d ", root->data);
}

void main(){
	
	node *root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	root->right->left = newNode(6);
	root->right->right = newNode(7);

	postOrder(root);

	printf("\n");
}
