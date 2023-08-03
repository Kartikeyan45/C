#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode{
	
	int data;
	struct TreeNode *left;
	struct TreeNode *right;

}Treenode;

/*
Treenode *newNode(int value){
	
	Treenode *node = (Treenode*)malloc(sizeof(Treenode));

	node->data = value;

	node->left = NULL;

	node->right = NULL;

	return node;
}


int search(int inorder[], int start, int end, int curr){
	
	for(int i = start; i <= end; i++){
		
		if(inorder[i] == curr){
			
			return i;
		}
	}

	return -1;
}
*/

void inorderPrint(Treenode *root){
	
	if(root == NULL){
		return;
	}

	inorderPrint(root->left);

	printf("%d ", root->data);

	inorderPrint(root->right);
}

Treenode *buildTree(int inOrder[], int postOrder[], int inOrderStart, int inOrderEnd, int postOrderStart, int postOrderEnd){

	if(inOrderStart > inOrderEnd){
		
		return NULL;
	}
	
	// 1 - Getting and Storing Root 
	int rootData = postOrder[postOrderEnd];

	Treenode *temp = (Treenode*)malloc(sizeof(Treenode));

	temp->data = rootData;
	
	// 2 - Search
	int idx;
	for(idx = inOrderStart; idx <= inOrderEnd; idx++){
		
		if(rootData == inOrder[idx]){
			
			break;
		}
	}
	
	// 3 - Removing left length by formula = idx - 1 - (inStart) + 1 == idx - inStart;
	int lLength = idx - inOrderStart;
	
	// 4 - Left Traversal
	temp->left = buildTree(inOrder,postOrder, inOrderStart, idx - 1, postOrderStart, postOrderStart + lLength - 1);
	
	// 5 - Right Traversal
	temp->right = buildTree(inOrder, postOrder,  idx + 1, inOrderEnd, postOrderStart + lLength, postOrderEnd-1);

	return temp;
}

void main(){
	
	int postOrder[] = {4,2,5,3,1};

	int inOrder[] = {4,2,1,5,3};

	int inorderStart = 0;
	
	int size = sizeof(inOrder) / sizeof(inOrder[0]);

	int inorderEnd = size - 1;

	int postOrderStart = 0;

	int postOrderEnd = size-1;

	Treenode *root = buildTree(inOrder, postOrder, inorderStart, inorderEnd, postOrderStart, postOrderEnd);

	inorderPrint(root);

	printf("\n");
}
