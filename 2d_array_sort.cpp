#include<bits\stdc++.h>


void display(vector<vector<int>> array){
	for(int i=0; i<array.size(); i++){
		for(int j=0; j<array[i].size(); i++){
			cout<< array[i][j]<<"   ";
		}
		cout<<endl;
	}
}
main(){
	vector<vector <int>> array{{3,0}, {4,1}, {2,0}, {1,0} };
	
	display(array);
	
}
