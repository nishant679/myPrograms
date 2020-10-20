#include<stdio.h>
#include<omp.h>
main()
{
	int a=2;
	
omp_set_num_threads (2);
	#pragma omp parallel
	  {
	  	printf("%d \n ",a);
	  }
}
