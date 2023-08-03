
/*	
 	Algorithm :

		1] Pick Element from preorder and create a node

		2] Increment preorder index

		3] Search for picked element's position in inorder
		4] Call to build left subtree from inorder's 0 to pos-1
		5] Call to build right subtree from inorder's pos+1 to n
		6] Return the node

*/

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

Treenode *buildTree(int inOrder[], int preOrder[], int inOrderStart, int inOrderEnd, int preOrderStart, int preOrderEnd){

	if(inOrderStart > inOrderEnd){
		
		return NULL;
	}

	int rootData = preOrder[preOrderStart];

	Treenode *temp = (Treenode*)malloc(sizeof(Treenode));

	temp->data = rootData;

	int idx;

	for(idx = inOrderStart; idx <= inOrderEnd; idx++){
		
		if(rootData == inOrder[idx]){
			
			break;
		}
	}

	int lLength = idx - inOrderStart;

	temp->left = buildTree(inOrder, preOrder, inOrderStart, idx - 1, preOrderStart+1, preOrderStart + lLength);

	temp->right = buildTree(inOrder, preOrder, idx + 1, inOrderEnd, preOrderStart + lLength + 1, preOrderEnd);

	return temp;
}

void main(){
	
	int preOrder[] = {1,2,4,3,5};

	int inOrder[] = {4,2,1,5,3};

	int inOrderStart = 0;
	
	int size = sizeof(inOrder) / sizeof(inOrder[0]);

	int inOrderEnd = size - 1;

	int preOrderStart = 0;

	int preOrderEnd = size - 1;

	Treenode *root = buildTree(inOrder, preOrder,inOrderStart,inOrderEnd,preOrderStart,preOrderEnd);

	inorderPrint(root);

	printf("\n");
}
