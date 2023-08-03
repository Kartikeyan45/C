
#include<stdio.h>
#include<stdlib.h>

#define MAX_Q_SIZE 500

struct Node{
	
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node** createQueue(int *front, int *rear){
	
	struct Node** queue = (struct Node**)malloc(sizeof(struct Node*) * MAX_Q_SIZE);

	*front = *rear = 0;

	return queue;
}

void enQueue(struct Node **queue, int *rear, struct Node* new_Node){
	
	queue[*rear] = new_Node;

	(*rear)++;
}

struct Node* deQueue(struct Node** queue, int* front){

    	(*front)++;

    	return queue[*front - 1];
}

void printLevelOrder(struct Node *root){
	
	int rear, front;

	struct Node** queue = createQueue(&front, &rear);

	struct Node *tempNode = root;

	while(tempNode){
		
		printf("%d ", tempNode->data);

		if(tempNode->left){
			
			enQueue(queue, &rear, tempNode->left);
		}

		if(tempNode->right){
				
			enQueue(queue, &rear, tempNode->right);
		}
		
		// Dequeue node and make it temp node
		tempNode = deQueue(queue, &front);
	}
}

struct Node *newNode(int value){
	
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));

	node->data = value;

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

	printf("Level Order Traversal is : ");

	printLevelOrder(root);

	printf("\n");
}
