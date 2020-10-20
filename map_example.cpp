#include<bits/stdc++.h>
using namespace std;

main(){
	map<string, string> student;
	
	
	student.insert(pair<string, string>("nishant", "216218013"));
	student.insert(pair<string, string>("ditikrushna", "216218008"));
	
	map<string, string> :: iterator itr;
	
	
	for(itr=student.begin(); itr != student.end(); itr++){
		cout<<itr->first<<"    ";
		cout<<itr->second<<endl;
	}
	
	cout<<student.count(1);
}
