#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left , *right;
};


node* createNode(int data){
     struct node *newNode = new node;
     newNode ->data = data;
     newNode->left = newNode->right = NULL;
     
     return newNode;
}

node* insertNode(node *root, int data){
	if(root == NULL){
		root = createNode(data);
	}
	if(root-> data > data){
		root = insertNode(root->right, data);
	}
	else{
		root = insertNode(root->left , data);
	}
	return root;
}

void printPreorder(node *root){
	while(root != NULL){
		cout<<root->data;
		printPreorder(root->left);
		printPreorder(root->right);
	}
}


main(){
	
	struct node *root;
	root = insertNode(root, 3);
	root = insertNode(root, 7);
	root = insertNode(root, 2);
	root = insertNode(root, 11);
	root = insertNode(root, 13);
	root = insertNode(root, 1);
	printPreorder(root);
	root->data = 8;
	cout<<root->data;
}
