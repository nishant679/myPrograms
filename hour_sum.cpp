#include<iostream>

using namespace std;

void display_arr();
void display_sum();
int arr[6][6];
int index=0;
int sum[16];

int main()
{
//	index=0;
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<6; j++)
		{
			arr[i][j]=i+j;
		}
	}
	display_arr();
	
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			for(int x=0; x<3; x++)
			{
				
			int m=0, n=0;
				for(int y=0; y<3; y++)
				{
					sum[index] = sum[index]+arr[m][n];	
					n++;
				}
				m++;
			}
			//cout<<"Index is  "<<index<<endl;
			index++;
			
		}
	}
    display_sum();
}

void display_arr()
  {
  	for(int i=0; i<6; i++)
  	  {
  	  	for(int j=0; j<6; j++)
			{
  	  	       cout<<"  "<<arr[i][j];
			}
			cout<<endl;
		}
  }
  
void  display_sum()
{
	for(int i=0; i<16; i++)
	{
		printf("\n Sum at index %d is %d ",i, sum[i]);
	}
}
