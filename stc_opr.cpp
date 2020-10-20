#include<iostream>

using namespace std;

void push(int stc[], int *top);
void show(int stc[], int *top);

main()
{
	int stc[100];
	int t=0;
	int *top = &t;
	push(stc, *top);
	show(stc, *top);
	push(stc, *top);
	push(stc, *top);
	show(stc, *top);
	
	return 0;
}

void push(int stc[],int *top)
{
	int num;
	cout<<"Enter the element to be inserted in the stack       :  ";
	cin>>num;
	stc[*top] = num;
	top++;
	//return 0;
}

void show(int stc[], int *top)
{
	while(top>=0)
	{
		cout<<stc[*top]<<endl;
		top--;
	}
}
