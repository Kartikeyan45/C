
//	3 - Height Of BT
//		- It is the depth of the tree's deepest node

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

int max(int x, int y){

	if(x > y){
		
		return x;
	}
	return y;
}

int heightNodes(node *root){		// Time Complexity : O(N) where N = no. of nodes
	
	if(root == NULL){
		
		return -1;
	}

	int leftHeight = heightNodes(root->left);
	int rightHeight = heightNodes(root->right);

	return max(leftHeight, rightHeight) + 1;
}

void main(){
	
	node *root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	root->right->left = newNode(6);
	root->right->right = newNode(7);

	int ret = heightNodes(root);

	printf("%d\n", ret);
}
