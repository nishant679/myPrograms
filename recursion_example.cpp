#include<iostream>

using namespace std;
int print(int n);

main()
{
   print(1200);	
}
	int print(int n){ 
		if(n == 0)
		return 0;
	   
	   else{
	   	printf("%d ",n);
	   	return print(n-1); 
	   }
	}

