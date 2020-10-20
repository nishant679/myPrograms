#include<stdio.h>
#include<iostream>
#include<omp.h>

using namespace std;

main(){
	int mat1[3][3], mat2[3][3], mul[3][3];
	
	// Inserting values into matrix
	printf("\n Enter 3*3 for mat1 \n");
	#pragma omp parallel for
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>mat1[i][j];
		}
	}
	
	printf("\n Enter 3*3 for mat2 \n");
	#pragma omp parallel for
	for(int i=0; i<3; i++){
		#pragma omp parallel for
		for(int j=0; j<3; j++){
			cin>>mat2[i][j];
		}
	}
	
	
	//multiplying the metrices
	#pragma omp parallel for
	for(int i=0; i<3; i++){
		#pragma omp parallel for
		for(int j=0; j<3; j++){
			mul[i][j] = 0;
			#pragma omp parallel for
			for(int k=0; k<3; k++){
			  mul[i][j] += mat1[i][k] * mat2[k][j];	
			}
			
		}
	}
	
	
	
	//printing the final output
	#pragma omp parallel for
	for(int i=0; i<3; i++){
		#pragma omp parallel for
		for(int j=0; j<3; j++){
			cout<<mul[i][j]<<"    ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
