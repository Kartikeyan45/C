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

void preOrderPrint(Treenode *root){
	
	if(root == NULL){
		return;
	}

	printf("%d ", root->data);

	preOrderPrint(root->left);

	preOrderPrint(root->right);
}

void postOrderPrint(Treenode *root){
	
	if(root == NULL){
		return;
	}

	postOrderPrint(root->left);

	postOrderPrint(root->right);

	printf("%d ", root->data);
}

Treenode *buildTree(int preOrder[], int postOrder[], int preStart ,int preEnd, int postStart, int postEnd){

	if(preStart > preEnd){
		
		return NULL;
	}

	int rootData = preOrder[preStart];

	Treenode *temp = (Treenode*)malloc(sizeof(Treenode));

	temp->data = rootData;

	if(preStart == preEnd){			
		
		return temp;
	}

	int idx;

	for(idx = postStart; idx <= postEnd; idx++){
		
		if(postOrder[idx] != preOrder[preStart + 1]){
			
			break;
		}
	}

	int lLength = idx - postStart + 1;

	temp->left = buildTree(preOrder, postOrder, preStart + 1, preStart + lLength , postStart ,idx);

	temp->right = buildTree(preOrder,postOrder, preStart + lLength + 1, preEnd, idx + 1, postEnd);

	return temp;
}

void main(){
	
	int preOrder[] = {1,2,4,5,3,6,7};

	int postOrder[] = {4,5,2,6,7,3,1};

	int postStart = 0;
	
	int size = sizeof(postOrder) / sizeof(postOrder[0]);

	int postEnd = size - 1;

	int preStart = 0;

	int preEnd = size - 1;

	Treenode *root = buildTree(preOrder, postOrder, 0, preEnd, 0, postEnd);

	inorderPrint(root);

	printf("\n");

	preOrderPrint(root);

	printf("\n");

	postOrderPrint(root);

	printf("\n");
}

/*
 	Including the condition "if(preStart == preEnd)" in the code is necessary to handle the base case where there is only
	one node in the current subtree being constructed.

	The "preStart" parameter represents the index of the root node in the preOrder Array, and the "preEnd" parameter
	represents the index of the last node in the current subtree. 

	If "preStart" and "preEnd" are equal, it means that there is only one node in the current subtree, and no further 
	recursion is required.In this case, the code simply assigns the value of the node and returns it.

	Without this condition, the code would continue with the recursive calls for the left and right subtrees even when
	there is only one node left to be processed.This would lead to incorrect memory access and potentially cause a 
	segmentation fault.

*/
