
//	Program to find minimum element in binary tree

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node{

	int data;
	struct Node *left;
	struct Node *right;
};

int findMin(struct Node *root){		
	
	if(root == NULL){		// T.C = O(N)
					// S.C = O(N), recursive call for each node tree is considered as stack space
		return INT_MAX;
	}

	int val = root->data;

	int left = findMin(root->left);
	int right = findMin(root->right);

	if(left < val){
		
		val = left;
	}

	if(right < val){
		
		val = right;
	}

	return val;
}

struct Node *newNode(int val){
	
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));

	node->data = val;

	node->left = NULL;
	node->right = NULL;

	return node;
}

void main(){
	
	struct Node *root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	root->right->left = newNode(6);
	root->right->right = newNode(7);

	root->left->left->left = newNode(8);
	root->left->left->right = newNode(9);

	root->right->right->left = newNode(10);
	root->right->right->right = newNode(11);

	printf("Minimium Element is : %d\n", findMin(root));
	
}
