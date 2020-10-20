#include<iostream>

using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root = NULL;
int insertNode(int x);

main(){
	int option;
	int x;
	cout<<"Enter your choice "<<endl;
	cout<<"1.  Insert a node "<<endl;
	cin>>option;
	switch(option){
	   case 1:
	   	   cout<<"Enter data to insert into tree "<<endl;
	   	   cin>>x;
	   	   insertNode(x);
	       break;	
	}

}

int insertNode(int x){
	if(root = NULL){
		root->data = x;
		root->left= NULL;
		root->right = NULL;
	}
	struct node *temp;
	temp = new node;
	temp = head;
	if(temp->data => x){
		temp->data = 
	}
}
