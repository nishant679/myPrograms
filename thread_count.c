#include<stdio.h>
#include<omp.h>

main()
{
	int num=0;
//	omp_set_num_thread(20);
	num = omp_get_max_threads();
	printf("%d",num);
}
