#include<stdio.h>

int fact(int n);

main(){
//	printf("  %d ",fact(10));
int ans;
ans = fact(12);
printf("%d   ", ans);
//fact(3);
}
int fact(int n){
	if(n==1)
	    return 1;
	else if(n == 0)
	     return 1;
	else
	    //printf("%d    ", n*fact(n-1));
	   return n*fact(n-1);
}
