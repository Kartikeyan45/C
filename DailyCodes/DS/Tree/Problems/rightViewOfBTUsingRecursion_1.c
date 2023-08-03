/*
 	Print Left View of a Binary Tree Using Recursion: 

    	Keep track of the level of a node by passing the level as a parameter to all recursive calls and also keep track of the maximum level. Whenever, we see a node whose level is more than maximum level so far, we print the node because this is the first node in its level 

    	Note: We traverse the left subtree before right subtree. 
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	
	int data;

	struct Node *left;
	struct Node *right;
}Node;

struct Node* newNode(int val){
	
	Node *temp = (Node*)malloc(sizeof(Node));

	temp->data = val;

	temp->left = temp->right = NULL;

	return temp;
}

void rightViewUtil(Node *root, int level, int *maxLevel){
	
	if(root == NULL){
		
		return;
	}

	// If this is the last Node of its level
	if(*maxLevel < level){
		
		printf("%d ", root->data);

		*maxLevel = level;
	}

	// Recur for right subtree first, then left subtree
	rightViewUtil(root->right, level+1, maxLevel);

	rightViewUtil(root->left, level+1, maxLevel);
}

// A wrapper over rightViewUtil()
void rightView(Node *root){
	
	int max_level = 0;

	rightViewUtil(root, 1, &max_level);
}

void main(){
	
	struct Node* root = newNode(1);
    	root->left = newNode(2);
    	root->right = newNode(3);

    	root->left->left = newNode(4);
    	root->left->right = newNode(5);

    	root->right->left = newNode(6);
    	root->right->right = newNode(7);

    	root->right->left->right = newNode(8);

	rightView(root);

	printf("\n");
}

/*
 	Time Complexity: O(N), Traversing the Tree having N nodes
	Auxiliary Space: O(N), Function Call stack space in the worst case.
*/
