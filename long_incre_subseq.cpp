#include<bits\stdc++.h>
using namespace std;

int inpHandler(vector<int> *input, int n){
   for(int i=0; i<n; i++){
   	int val=0;
   	scanf("%d",&val);
   	input->push_back(val);
   }	
}

int lis(vector<int> input, int n){
	int *lis, i, j, max=0;
	lis = (int *)malloc (sizeof(int)*n);
	
	//Initializing LIS values for all indexes
	for(i=0; i<n; i++)
	    lis[i] = 1;
	    
	//Complete optimized LIS values in bottom up manner
	for(i=1; i<n; i++){
		for(j = 0, j<i; j++){
			if(input[i]> input[j] && lis[i]<lis[j]+1){
				lis[i] = lis[j]+1;
			}
		}
	}
}

main(){
	vector<int> input;
	int n=0;
	cout<<"Enter the number of inputs ";
	cin>>n;
	inpHandler(&input, n);
	
	for(int i=0; i<input.size(); i++){
		cout<<input[i]<<" ";
	}
	
	//lis() returns the length of the longest increasing 
	//Subsequence in arr[] of size n
	
	
}
