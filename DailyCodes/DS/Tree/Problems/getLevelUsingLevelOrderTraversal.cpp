
/*
 	Get Level of a node in a Binary Tree
*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
	
	int data;
	struct Node *left;
	struct Node *right;
};

int printLevel(Node *root, int x){
	
	Node *node;

	if(root == NULL){
		
		return 0;
	}

	queue<Node*> q;		// create an empty queue for level order traversal
	
	int currLevel = 1;	// create a variable represent current level of tree
	
	q.push(root);

	while(q.empty() == false){
		
		int size = q.size();

		while(size--){
			
			node = q.front();

			if(node->data == x){
				
				return currLevel;
			}

			q.pop();

			if(node->left != NULL){
				
				q.push(node->left);
			}

			if(node->right != NULL){
				
				q.push(node->right);
			}
		}

		currLevel++;
	}

	return 0;
}

struct Node *newNode(int val){
	
	Node *temp = new Node;

	temp->data = val;

	temp->left = NULL;

	temp->right = NULL;

	return temp;
}

int main(){
	
	Node *root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	root->right->left = newNode(6);
	root->right->right = newNode(7);

	cout << printLevel(root, 6) << endl;
}
