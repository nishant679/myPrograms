#include<stdio.h>
#include<omp.h>

int main()
{
	double tStart, tStop, tExec=0;
	int i, arr[200001];
	tStart = omp_get_wtime();
	
	#pragma omp parallel 
	{
	    for(i=0; i<200000; i++)
		{
			arr[i]=1000;
			}	
		for(i=0; i<200000; i++)
		{
			arr[i]=arr[i]-1;
		}
		
		tStop = omp_get_wtime();
	}
	//tExec = tStop - tStart;
	
  printf("\n Execution Time =  %d  ",tStop - tStart);
  printf("\n Start Time = %d  ",tStart);
  printf("\n End Time = %d  ",tStop);
  
  return 0;
}
