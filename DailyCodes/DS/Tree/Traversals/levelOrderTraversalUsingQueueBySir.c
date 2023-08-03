#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct TreeNode {

	int data;
	struct TreeNode *left;
	struct TreeNode *right;

};

struct queue  {

	struct TreeNode *btptr;
	struct queue *next;

};

struct queue *front = NULL;
struct queue *rear = NULL;


bool isEmpty() {

	if(front==NULL ) {		//&& rear==NULL) {

		return true;
	} else {

		return false;
	}
}

void enqueue(struct TreeNode *temp) {

	struct queue *newqueue = (struct queue *) malloc (sizeof(struct queue));

	newqueue->btptr = temp;
	newqueue->next = NULL;

	if(front==NULL ) {			//&& rear ==NULL) {

		front=rear=newqueue;


	} else {

		rear->next = newqueue;
		rear = newqueue;
	}
}

struct TreeNode *dequeue () {

	if(isEmpty()) {

		printf("Queue is Empty\n");

	} else {

		struct queue *temp = front;

		struct TreeNode *item = front->btptr;

		front = front->next;

		if(temp==rear) {

			front=rear=NULL;
		}

		free(temp);

		return item;

	}

}

struct TreeNode* CreateTree(int level) {

	level+=1;

	struct TreeNode *newNode = (struct TreeNode *) malloc (sizeof(struct TreeNode));
	printf("Enter Data : \t");
	scanf("%d",&newNode->data);


	printf("Do You Wanna Add left of level %d : \t",level);
	getchar();
	char ch;
	scanf("%c",&ch);

	if(ch=='y') {

		newNode->left = CreateTree(level);

	} else {

		newNode->left = NULL;
	}

	printf("Do You Wanna Add right of level %d :\t",level);
	getchar();
	scanf("%c",&ch);

	if(ch=='y') {

		newNode->right = CreateTree(level);

	} else {

		newNode->right = NULL;
	}

	return newNode;

}

int levelorder(struct TreeNode *root) {


	if(root==NULL) {

		return -1;

	} else {

		struct TreeNode *temp = root;

		enqueue(temp);

		while(!isEmpty()){

			struct TreeNode *ret = dequeue();

			printf("%d  ", ret->data);

			if(temp->left!=NULL ) {

				enqueue(temp->left);
			}

			if(temp->right!=NULL) {

				enqueue(temp->right);
			}

			if (front==NULL) {

				temp = NULL;

			} else {
		 		temp = front->btptr;
			}
		}
	}
}

void main() {

	struct TreeNode *root = (struct TreeNode *) malloc(sizeof(struct TreeNode));


	printf("Enter RootNode Data : ");
	scanf("%d",&root->data);

	printf("\n\t\t\tTree Rooted with %d\n\n",root->data);

	printf("Do You Wanna Add left of rootNode  :\t");
	getchar();
	char ch;
	scanf("%c",&ch);

	if(ch=='y') {

		root->left = CreateTree(0);

	} else {

		root->left = NULL;
	}

	printf("Do You Wanna Add right of rootNode :\t");
	getchar();
	scanf("%c",&ch);

	if(ch=='y') {

		root->right = CreateTree(0);

	} else {

		root->right = NULL;
	}

	levelorder(root);
	printf("\n");
}
