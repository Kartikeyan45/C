
//	Program to search element in binary tree

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{

	int data;
	struct Node *left;
	struct Node *right;
};

bool isSearch(struct Node *root, int key){
	
	if(root == NULL){		// T.C = O(N)
					// S.C = O(N)
		return false;
	}

	if(root->data == key){
		
		return true;
	}

	bool left = isSearch(root->left, key);

	if(left){

		return true;
	}

	bool right = isSearch(root->right, key);

	return right;
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

	int key = 12;

	if(isSearch(root,key)){
		
		printf("Exists\n");
	}else{
		
		printf("Not Exists\n");
	}
}
