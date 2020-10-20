#include<iostream>

using namespace std;

class data
{
  char arr[5000];
  char temp;
  int i;
  
  
  public:
    getData(){
    	   i=0;
    		cout<<"Enter data into the array "<<endl;
    	
    	do{
        	cin>>temp;
        	arr[i]=temp;
        	i++;
    		
		}while(temp != 120);
		i--;
	}
    printValue(){
    	for(int j=0; j<i; j++){
    		cout<<"  "<<arr[j];
		}
	}	
	countValue(){
		
		
	}
};

main(){
	data d1;
	d1.getData();
	d1.printValue();
}
