
/*

Follow the below step to Implement the idea:

    Do level order traversal of the tree.
        For each level keep a track of the current level and print the first encountered node of this level.
        Move to the next level.

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

void printLeftView(Node *root){
	
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

			if(i == 0){
				
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

    	Node* root = newNode(10);
    	root->left = newNode(2);
    	root->right = newNode(3);

    	root->left->left = newNode(7);
    	root->left->right = newNode(8);

    	root->right->right = newNode(15);
    	root->right->left = newNode(12);

    	root->right->right->left = newNode(14);

    	printLeftView(root);

	printf("\n");
}

/*
 	Time Complexity: O(N), where n is the number of nodes in the binary tree.
	Auxiliary Space: O(N) since using space for auxiliary queue
*/
