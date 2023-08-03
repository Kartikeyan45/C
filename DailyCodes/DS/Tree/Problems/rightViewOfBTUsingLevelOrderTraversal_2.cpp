
/*

    The idea is to use Level Order Traversal as the last node every level gives the right view of the binary tree.

Follow the steps below to solve the problem:

    Perform level order traversal on the tree
    At every level print the last node of that level

*/

#include<iostream>
#include<queue>

struct Node{
	
	int data;

	struct Node *left;
	struct Node *right;
};

Node* newNode(int val){
	
	Node *temp = new Node;

	temp->data = val;

	temp->left = temp->right = NULL;

	return temp;
}

void printRightView(Node *root){
	
	if(!root){
		
		return;
	}

	std::queue < Node* > q;

	q.push(root);

	while(!q.empty()){
		
		int n = q.size();

		for(int i = 0; i < n; i++){
			
			Node *temp = q.front();

			q.pop();

			if(i == n - 1){
				
				std::cout << temp->data << " ";
			}
			
			if(temp->left != NULL){
				
				q.push(temp->left);
			}

			if(temp->right != NULL){
				
				q.push(temp->right);
			}
		}
	}
}

int main(){

   	 Node* root = newNode(1);
    	root->left = newNode(2);
    	root->right = newNode(3);

    	root->left->left = newNode(4);
    	root->left->right = newNode(5);

    	root->right->left = newNode(6);
    	root->right->right = newNode(7);

    	root->right->left->right = newNode(8);

    	printRightView(root);

	printf("\n");
}

/*
 	Time Complexity: O(N), where N is the number of nodes in the binary tree.
	Auxiliary Space: O(N) since using auxiliary space for queue
*/
