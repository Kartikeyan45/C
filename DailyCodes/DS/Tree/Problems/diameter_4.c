
//	4 - Diameter Of BT
//		- Number of the nodes in the longest path between any 2 leaves

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
		
		return 0;
	}

	int leftHeight = heightNodes(root->left);
	int rightHeight = heightNodes(root->right);

	return max(leftHeight, rightHeight) + 1;
}

int calcDiameter1(node *root){		// Time Comple : O(N*N)
	 
	if(root == NULL){
		
		return 0;
	}

	int lHeight = heightNodes(root->left);
	int rHeight = heightNodes(root->right);

	int currDiameter = lHeight + rHeight + 1;	

	int lDiameter = calcDiameter1(root->left);
	int rDiameter = calcDiameter1(root->right);

	return max(currDiameter, max(lDiameter, rDiameter));
}

int calcDiameter2(node *root, int *height){           // Time Comple : O(N)

        if(root == NULL){
		
		*height = 0;
                return 0;
        }

        int lh = 0, rh = 0;

        int lDiameter = calcDiameter2(root->left, &lh);
        int rDiameter = calcDiameter2(root->right, &rh);

	int currDiameter = lh + rh + 1;

	*height = max(lh, rh) + 1;

        return max(currDiameter, max(lDiameter, rDiameter));
}


void main(){
	
	node *root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	root->right->left = newNode(6);
	root->right->right = newNode(7);

	int ret1 = calcDiameter1(root);	// Appraoch 1
	
	int height = 0;

	int ret2 = calcDiameter2(root, &height);	// Appraoch 2

	printf("%d\n", ret1);

        printf("%d\n", ret2);
}
