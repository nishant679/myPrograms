#include <iostream>

using namespace std;

void swap(int *a, int *b){
	printf("swap called\n");
	int *c;
	*c = *a;
	*a = *b;
	*b = *c;
	
}

int partition(int arr[], int start, int end){
	printf("partition called \n");
	int pivot = arr[end];
	int pIndex = start;
	
	
	for(int i = start; i<end; i++){
		if(arr[i] <= pivot){
			swap(arr[i], arr[pIndex]);
			pIndex = pIndex +1;
		}
	}
	swap(arr[pIndex], arr[end]);
	return pIndex;
}

void quickSort(int arr[], int start, int end){
	printf("quicksort called\n");
	if(start < end){
		int pIndex=0;
		pIndex = partition(arr, start, end);
		quickSort(arr, start, pIndex-1);
		quickSort(arr, pIndex + 1, end);
	}
}

int main(){
	int arr[10] = {23, 1, 45, 2, 12, 78, 9, 15, 32, 19};
	int start = 0; 
	int end = 9;
	quickSort(arr, start, end);
	for(int i=0; i<10; i++){
		cout<<arr[i]<<"  ";
	}
	
	return 0;
}
