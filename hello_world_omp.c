#include<stdio.h>
#include<omp.h>

int main()
{
	int id=0;
	{
		omp_set_num_threads (224);
         #pragma omp parallel
		 {
		 	
	printf("Hello %d ",id);
	printf("World %d ",id);
				 }		
	}
	
	return 0;
}
