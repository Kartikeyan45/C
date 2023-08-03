#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *left;
	struct node *right;
}node;

node *createNode(int level){
	level = level+1;
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter the data :\n");
	scanf("%d",&newnode->data);
	getchar();
		
	char left ;
	printf("Do you want to add node to left of %d level node ?\n",level);
	scanf("%c",&left);
	if(left == 'y' || left == 'Y'){
		newnode->left = createNode(level);
	}else{
		newnode->left = NULL;
	}

	getchar();
	char right ;
	printf("Do you want to add node to right of %d level node ?\n",level);
	scanf("%c",&right);

	if(right == 'y' || right == 'Y'){
		newnode->right = createNode(level);
	}else{
		newnode->right = NULL;
	}
	return newnode;
}
int preOrder(node *root){
	if(root == NULL){
		return 0;
	}
	printf("%d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}
int inOrder(node *root){
	if(root == NULL){
		return 0;
	}
	inOrder(root->left);
	printf("%d ",root->data);
	inOrder(root->right);
}
int postOrder(node *root){
	if(root == NULL){
		return 0;
	}
	postOrder(root->left);
	postOrder(root->right);
	printf("%d ",root->data);
}
void printTree(node *root){

	char ch ;
	do{	
		int choice;
		printf("1.PreOrder\n");
		printf("2.InOrder\n");
		printf("3.PostOrder\n");

		scanf("%d",&choice);

		switch(choice){

			case 1:{

				printf("Printing preOrder Tree :");
				preOrder(root);

				printf("\n");
				break;
			       }

			case 2:{
				       
				printf("Printing inOrder Tree :");
				inOrder(root);

				printf("\n");
				break;
			       }
			case 3:{
				
				printf("Printing postOrder Tree :");
				postOrder(root);

				printf("\n");
				break;
			       }

			defalut:
				printf("Enter valid choice\n");
		}

		getchar();
		printf("Do you want to print Tree again ? \n");
		scanf("%c",&ch);

	}while(ch == 'Y' || ch == 'y');
}
void main(){

	node *rootNode = (node*)malloc(sizeof(node));

	printf("Enter the data of Root node\n");
	scanf("%d",&rootNode->data);

	getchar();

	printf("\t\tRootNode Added : %d\n",rootNode->data);

	char left;
	printf("Do you want to add node to left of Root node ?\n");
	scanf("%c",&left);

	getchar();

	if(left == 'Y' || left == 'y'){
		rootNode->left = createNode(0);	
	}else{
	
		rootNode->left = NULL;
	}

	getchar();

	char right;
	printf("Do you want to add node to right of Root node ?\n");
	scanf("%c",&right);

	if(right == 'Y' || right == 'y'){
		rootNode->right = createNode(0);	
	}else{
	
		rootNode->right = NULL;
	}

	printTree(rootNode);
}

