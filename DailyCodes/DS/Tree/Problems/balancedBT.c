
/*
 	
        Following are the conditions for a height-balanced binary tree:

        1] difference between the left and the right subtree for any node is not more than one
        2] the left subtree is balanced
        3] the right subtree is balanced
*/



#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{

	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *newNode(int val){
	
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));

	node->data = val;

	node->left = NULL;
	node->right = NULL;

	return node;
}

	// 1 - Approach

int max(int x, int y){
	
	if(x > y){
		
		return x;
	}
	return y;
}

int height(struct Node *root){
	
	if(root == NULL){
		
		return 0;
	}

	int lh = height(root->left);
	int rh = height(root->right);

	return 1 + max(lh, rh);
}

bool balanced(struct Node *root){
	
	if(root == NULL){
		
		return true;
	}

	int lh = height(root->left);
	int rh = height(root->right);

	if((rh-lh) > 1){
		
		return false;
	}

	bool left = balanced(root->left);	// T.C = O(N*N)
	bool right = balanced(root->right);

	if(left == false || right == false){
		
		return false;
	}

	return true;
}

	// 2 - Approach

int dfsHeight(struct Node *root){
	
	if(root == NULL){
		
		return 0;
	}

	int lh = dfsHeight(root->left);

	if(lh == -1){
		
		return -1;
	}

	int rh = dfsHeight(root->right);

	if(rh == -1){		
		
		return -1;
	}

	if((lh - rh ) >  1){	// main condition
		
		return -1;	// just that if left height - right height > 1than we are returning -1, such that it will not be a balanced tree
	}

	return max(lh, rh) + 1;
}

bool balanced1(struct Node *root){
	
	if(dfsHeight(root) == -1){	// T.C = O(N)
		
		return false;
	}

	return true;
}

void main(){
	
	struct Node *root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->right->left = newNode(4);
	root->right->right = newNode(5);

	printf("Balanced Tree or not : %d\n", balanced(root));
	
	printf("Balanced Tree or not : %d\n", balanced1(root));
	
}
