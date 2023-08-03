
#include<iostream>
#include<queue>
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

void printLevelOrder(Node *root){
	
	if(root == NULL){
		
		return;
	}
	
	// Create an empty queue for level order traversal
	queue < Node* > q;

	q.push(root);

	while(q.empty() == false){
		
		Node *node = q.front();

		cout << node->data << " ";

		q.pop();

		if(node->left != NULL){
			
			q.push(node->left);
		}

		if(node->right != NULL){
			
			q.push(node->right);
		}
	}
}

int main(){
	
	Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	printLevelOrder(root);

	cout << endl;
}
