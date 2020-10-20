#include<stdio.h>
#include<omp.h>

int main(void)
{
	#pragma amp parallel
	{
		printf("Hello World ");
	}
	return 0;
}
