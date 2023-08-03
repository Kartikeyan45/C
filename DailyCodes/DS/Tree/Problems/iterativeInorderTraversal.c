
// tree IteRative Way

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct treeNode {

	int data;
	struct treeNode *left;
	struct treeNode *right;

};

struct Stack{

	struct treeNode *BTptr;
	struct Stack *next;

};

struct Stack *top = NULL;



struct treeNode *createTree( int level) {

	level+=1;

	struct treeNode *newTree = (struct treeNode *) malloc(sizeof(struct treeNode));

	printf("Enter Data  :\t");
	scanf("%d",&newTree->data);

	char ch;
	printf("Do you Wnat Add Node left of level  %d  : \t",level);
	getchar();
	scanf("%c",&ch);

	if(ch=='y') {

		newTree->left = createTree(level);

	} else {

		newTree->left = NULL;
	}


	printf("Do You Want Add Node Right Of level %d : \t",level);
	getchar();
	scanf("%c",&ch);

	if(ch=='y') {

		newTree->right = createTree(level);

	} else {

		newTree->right = NULL;
	}

	return newTree;

}
bool isEmpty() {

	if(top==NULL) {

		return true;
	}

	return false;
}

void push(struct treeNode *temp) {

	struct Stack *new = (struct Stack *) malloc(sizeof(struct Stack));

	new->BTptr = temp;
	new->next = top;
	
	top = new;
}

struct treeNode * pop() {

	struct Stack * temp = top;

	struct treeNode * item = top->BTptr;
	
	top = top->next;
	
	free(temp);

	return item;
}

int StInOrder(struct treeNode *root) {


	if(root==NULL) {

		return -1;

	} else {

		struct treeNode *temp = root;

		while(!isEmpty() || temp!=NULL) {

			if(temp!=NULL) {

				push(temp);
				temp = temp->left;

			} else {

				struct treeNode *store = pop();

				printf("%d\n",store->data);

				temp = store->right;
			}
		}
	}
}

void main() {

	struct treeNode *root = (struct treeNode *) malloc(sizeof(struct treeNode));

	printf("Enter RootNode Data :\t");
	scanf("%d",&(root->data));

	printf("\t\t\t Tree Rooted With %d\n\n",root->data);

	char ch;
	printf("Do You Want Add Node left Of level %d  : \t",0);
	getchar();
	scanf("%c",&ch);

	if(ch=='y') {

		root->left = createTree(0);

	} else {

		root->left = NULL;
	}

	printf("Do You Want Add Node Right Of level %d : \t",0);
	getchar();
	scanf("%c",&ch);

	if(ch=='y') {

		root->right = createTree(0);

	} else {

		root->right = NULL;
	}

	StInOrder(root);
}
