
/*	
 	Sum Replacement 
		: Replace the value of each node with the sum of all subtree node and itself

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

//	Approach 1
void sumReplace1(struct Node *root){
	
	if(root == NULL){
		
		return;
	}

	sumReplace1(root->left);
	sumReplace1(root->right);

	if(root->left != NULL){
		
		root->data += root->left->data;
	}

	if(root->right != NULL){
		
		root->data += root->right->data;
	}
}

int sumReplace2(struct Node *root){

        if(root == NULL){

                return 0;
        }

        int left = sumReplace2(root->left);
        int right = sumReplace2(root->right);
	
	root->data = root->data + left + right;

 	return root->data;
}

void preOrder(struct Node *root){
	
	if(root == NULL){
	
		return;
	}

	cout << root->data << " ";

	preOrder(root->left);
	preOrder(root->right);
}

int main(){
	
	Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	preOrder(root);
	
	cout << "\n";

//	sumReplace1(root);

	sumReplace2(root);

	preOrder(root);

	cout << "\n";
}
