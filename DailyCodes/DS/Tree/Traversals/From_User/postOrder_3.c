
#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode{
	
	int data;
	struct TreeNode *left;
	struct TreeNode *right;

}treenode;

treenode *createNode(int level){
	
	level = level + 1;

	treenode *newNode = (treenode*)malloc(sizeof(treenode));

	printf("Enter data for newNode\n");
	scanf("%d", &newNode->data);
	
	getchar();

	char left;
        printf("Do u want to add node to left of %d level node ?\n",level);
        scanf("%c", &left);

        getchar();

        if(left == 'y' || left == 'Y'){

                newNode->left = createNode(level);
        }else{
                newNode->left = NULL;
        }
	

        char right;
        printf("Do u want to add node to right of %d level node ?\n",level);
        scanf("%c", &right);

        getchar();

        if(right == 'y' || right == 'Y'){

                newNode->right = createNode(level);
        }else{
                newNode->right = NULL;
        }

	return newNode;
}

void postOrder(treenode *root){
	
	if(root == NULL){
		
		return ;
	}

	postOrder(root->left);

	postOrder(root->right);

	printf("%d ", root->data);
}

void printTree(treenode *root){
	
	char ch;

	do{
		
		int choice;
		printf("1.postOrder\n");

		scanf("%d", &choice);

		switch(choice){
		
			case 1:
				postOrder(root);
				printf("\n");
				break;
			default:
				printf("Enter Valid Choice\n");
		}

		getchar();
		printf("Do u want to print tree again \n");
		scanf("%c", &ch);

	}while(ch == 'y' || ch == 'Y');
}

void main(){
	
	treenode *rootNode = (treenode*)malloc(sizeof(treenode));

	printf("Enter Data for Root node\n");
	scanf("%d", &rootNode->data);
	
	getchar();

	printf("\t\tRoot Node data is : %d\n", rootNode->data);

	char left;
	printf("Do u want to add node to left of the root node ?\n");
	scanf("%c", &left);

	getchar();

	if(left == 'y' || left == 'Y'){
		
		rootNode->left = createNode(0);
	}else{
		rootNode->left = NULL;
	}

        char right;
        printf("Do u want to add node to right of the root node ?\n");
        scanf("%c", &right);

        getchar();

        if(right == 'y' || right == 'Y'){

                rootNode->right = createNode(0);
        }else{
                rootNode->right = NULL;
        }

	printTree(rootNode);
}
