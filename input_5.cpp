#include<iostream>
using namespace std;


int take_input(int arr[], int counter){
	cin>>arr[counter];
	counter++;
	return counter;
}

int quit_program(int arr[], int counter){
	int sum=0, prod=1;
	while(counter--){
		sum += arr[counter];
		prod *= arr[counter]; 
	}
	cout<<"Sum is "<<sum<<endl;
	cout<<"product is "<<prod<<endl;
}
main(){
	int counter=0, arr[200];
	char q;
Level:
	while(counter < 6){
	    counter=take_input(arr, counter);
	}
	
	if(counter > 5){
		cout<<"press q to quit"<<endl;
		cin>>q;
		if(q == 'q' || q == 'Q')
			quit_program(arr, counter);
		else goto Level;
		
	}
}
