#include<stdio.h>
#include<conio.h>
#include<omp.h>

void say_hello(void)
{
	int my_rank = omp_get_thread_num();
	int num_process = omp_get_num_threads();
	printf("\n Hello from thread %d of %d ",my_rank, num_process);
}
int main(void)
{
	//setenv OMP_NUM_THREADS 2
	#pragma omp parallel
	    say_hello();
	    return 0;
}
