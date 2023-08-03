/*

	Left View of a Binary Tree Using Recursion:

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

void leftViewUtil(Node *root, int level, int *maxLevel){
	
	if(root == NULL){
		
		return;
	}

	// If this is the first node of its level
	if(*maxLevel < level){
		
		printf("%d ", root->data);

		*maxLevel = level;
	}

	leftViewUtil(root->left, level+1, maxLevel);

	leftViewUtil(root->right, level+1, maxLevel);
}

// A wrapper over leftViewUtil()
void leftView(Node *root){
	
	int max_level = 0;

	leftViewUtil(root, 1, &max_level);
}

void main(){
	
	struct Node *root = newNode(10);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(7);
	root->left->right = newNode(8);

	root->right->right = newNode(15);
	root->right->left = newNode(12);

	root->right->right->left = newNode(14);

	leftView(root);

	printf("\n");
}

/*
 	Time Complexity: O(N), The function does a simple traversal of the tree, so the complexity is O(n). 
	Auxiliary Space: O(h), due to the stack space during recursive call. ‘h’ here is the height of the binary tree.
*/
