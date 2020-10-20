//Hour Sum Hacker RANK

#include<iostream>
 using namespace std;

void show_sum(int sum[]);
 int  main()
 {
     int arr[6][6];
     int sum[16];
     int k=0, temp;
     cout<<"Enter Array Elements";
     for(int i=0; i<6; i++)
        {
            for(int j=0; j<6; j++)
            {
                cin>>arr[i][j];
            }
        }

        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                sum[k] = sum[k] +arr[i][j]+arr[i][j+1]+ arr[i][j+2];
                sum[k] = sum[k] +arr[i+1][j+1] ;
                sum[k] = sum[k] +arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
                k++;
            }
        }
        show_sum(sum);
        for(int i=0; i<16; i++)
        {
            for(int j=1; j<16; j++)
            {
                if(sum[i]>sum[j])
                {
                    temp = sum[i];
                    sum[i] = sum[j];
                    sum[j] = temp;
                }
            }
        }

        cout<<sum[15];
        show_sum(sum);
		
    return 0;
    }
    
void show_sum(int sum[])
  {
  	for(int i=0; i<16; i++)
  	{
  		cout<<sum[i]<<endl;
	  }
  }
