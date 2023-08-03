
/*
 	Get Level of Node in Binary Tree
*/

/*
 	The idea is to start from the root and level as 1. If the key matches with root’s data, return level. Else recursively call for left and right subtrees with level as level + 1. 

*/

#include<stdio.h>
#include<stdlib.h>

struct Node{
	
	int data;
	struct Node *left;
	struct Node *right;
};

int getLevelUtil(struct Node *root, int data, int level){
	
	if(root == NULL){
		
		return 0;
	}

	if(root->data == data){
		
		return level;
	}

	int downLevel = getLevelUtil(root->left, data, level+1);

	if(downLevel != 0){
		
		return downLevel;
	}

	downLevel = getLevelUtil(root->right, data, level+1);

	return downLevel;
}

int getLevel(struct Node *root, int data){
	
	return getLevelUtil(root, data, 1);
}

struct Node *newNode(int val){
	
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));

	node->data = val;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void main(){
	
	struct Node *root = newNode(3);

	root->left = newNode(2);
	root->right = newNode(5);
	root->left->left = newNode(1);
	root->left->right = newNode(4);

	for(int i = 1; i <= 5; i++){
		
		int level = getLevel(root, i);

		if(level){
			
			printf("Level of %d is %d\n", i, getLevel(root, i));
		}else{
			
			printf("%d is not present in tree\n", i);
		}
	}
}
