#include<stdio.h>
void pass_by_value(int b);
void pass_by_reference(int *ptr);
main()
{
	int arr[4]={12,1,3,18};
	int b=89;
	int *ptr;
	ptr = &b;
	
	pass_by_value(b);
	pass_by_reference(ptr);
	printf("\n %d",b);
}

void pass_by_value(int b)
{
	int num = b;
	b+2;
	printf("\n %d ",b);
}

void pass_by_reference(int *ptr)
{
	int num = *ptr;
	printf("\n %d  ",num);
	ptr+2;
	//return *ptr+2;
}
