#include<iostream>

using namespace std;

struct node{
	int data;
	struct node *next;
};

node *head;
//head = new node;

void insert_node();
void print_node();

main(){
	insert_node();
	insert_node();
	insert_node();
	insert_node();
	insert_node();
	insert_node();
	insert_node();
	insert_node();
	print_node;
	
	
}

void insert_node(){
	node *temp;
	temp = new node;
	head = temp;
	cout<<"Insert data into node ";
	cin>>temp->data;
	temp->next= head;
}

void print_node(){
	node *temp;
	temp = new node;
	temp = head;
	while(temp->next != NULL){
		cout<<"   "<<temp->data;
		temp = temp->next;
	}
}



