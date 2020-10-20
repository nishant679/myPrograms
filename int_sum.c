#include<stdio.h>
#include<omp.h>

int main()
{
	int i=0, sum=0;
	omp_set_num_threads (1000);
	int max=omp_get_max_threads();
	#pragma omp parallel for
	   for(i=0; i<100000; i++)
	     {
	     	    sum = sum+i; 
		 }
		 printf("Sum =  %d \n ",sum);
		 printf("\n max threads is %d ",max);
	return 0;
}
