
//	Program to find second minimum element in binary tree

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node{

	int data;
	struct Node *left;
	struct Node *right;
};

//	approach 1

/*
int findSecMin(struct Node *root){		
	
	int min_val = INT_MAX;
	int second_min = INT_MAX;
	
	void traverse(struct Node *node){

		if(node == NULL){	

			return ;
		}
	
		if(node->data < min_val){
		
			second_min = min_val;
			min_val = node->data;
		}

		else if(min_val < node->data && node->data < second_min){
		
			second_min = node->data;
		}

		traverse(node->left);
		traverse(node->right);

	}

	traverse(root);

	if(second_min == INT_MAX){
		
		return -1;	// second minimum doesn't exist
	}else{
		
		return second_min;
	}
}
*/

//	appraoch 2

int findSecMin(struct Node *root){

        int min_val = root->data;	// 1 change
        int second_min = INT_MAX;

        void traverse(struct Node *node){

                if(node == NULL){

                        return ;
                }

                if(node->data > min_val){	// 2nd change

                        if(node->data < second_min){
				
				second_min = node->data;
			}
                }

                traverse(node->left);
                traverse(node->right);
        }

        traverse(root);

        if(second_min == INT_MAX){

                return -1;      // second minimum doesn't exist
        }else{

                return second_min;
	}
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

	printf("Second Minimium Element is : %d\n", findSecMin(root));
	
}
