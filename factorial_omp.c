//Factorial of a program using openMp 

#include<stdio.h>
#include<omp.h>

main()
{
	int num, fact=1,i;
	
	printf("\n Enter the number to find it's factorial ");
	scanf("%d",&num);
	
	#pragma omp parallel for
	for(i=num; i>1; i--)
	{
		#pragma omp critical
		fact = fact*i;
	}
	
	printf("\n Factorial of %d is %d ",num,fact);
	
	return 0;
}
