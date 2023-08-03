
/*	
 	Algorithm :

		1] Pick Element from preorder and create a node

		2] Increment preorder index

		3] Search for picked element's position in inorder
		4] Call to build left subtree from inorder's 0 to pos-1
		5] Call to build right subtree from inorder's pos+1 to n
		6] Return the node

*/

#include<iostream>
using namespace std;

struct Node{
	
	int data;
	struct Node *left;
	struct Node *right;

	Node(int val){
		
		data = val;
		left = NULL;
		right = NULL;
	}
};

int search(int inorder[], int start, int end, int curr){
	
	for(int i = start; i <= end; i++){
		
		if(inorder[i] == curr){
			
			return i;
		}
	}

	return -1;
}

void inorderPrint(Node *root){
	
	if(root == NULL){
		return;
	}

	inorderPrint(root->left);

	printf("%d ", root->data);

	inorderPrint(root->right);
}

Node *buildTree(int preorder[], int inorder[], int start, int end){
	
	int index = 0;

	if(start > end){
		
		return NULL;
	}

	int curr = preorder[index];
	index++;

	Node *node = new Node(curr);
	
	if(start == end){	// inorder madhe 1 element urlela ahe
		
		return node;
	}

	int position = search(inorder,start,end, curr);

	node->left = buildTree(preorder, inorder, start, position-1);

	node->right = buildTree(preorder, inorder, position+1, end);

	return node;
}

int main(){
	
	int preorder[] = {1,2,4,3,5};

	int inorder[] = {4,2,1,5,3};

	int inorderStart = 0;
	
	int size = sizeof(inorder) / sizeof(inorder[0]);

	int inorderEnd = size - 1;

	cout << inorderEnd << endl;

	Node *root = buildTree(preorder, inorder, inorderStart, inorderEnd);

	inorderPrint(root);
}
