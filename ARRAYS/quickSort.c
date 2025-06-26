//DSA Array - Quick Sort

#include <stdio.h>
#include <stdlib.h>

void swap (int *x, int *y);						//swap func
void quicksort(int arr[], int low, int high);  	//qSort func
int partition (int arr[], int low, int high);	//partition func

//---------------------------------------------------------------------------------------------------MAIN FUNCTION
int main () {
	int array[] = {5, 9, 6, 7, 3};
	int length = sizeof(array) / sizeof(array[0]);
		
	//print input
	printf("INPUT:\n");
	for (int i = 0; i<length; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	//call quicksort function
	quicksort(array, 0, length - 1);								
		
	//print result (output)
	printf("\nOUTPUT:\n");
	for (int i = 0; i<length; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	
	return 0;
}

//----------------------------------------------------------------------------------------------------MAIN FUNCTION

//Swap function
void swap (int *x, int *y){							
	int temp = *x;
	*x = *y;
	*y = temp;
	
}

//Quick Sort Function
void quicksort(int arr[], int low, int high){			
		
	if (low < high){
		int pivot_index = partition(arr, low, high);			
		quicksort(arr, low, pivot_index-1);					//recursive call --> to solve the left side partition
		quicksort(arr, pivot_index + 1, high); 				//recursive call --> to solve the right side partition
	}
}

//Partition function
int partition (int arr[], int low, int high){						
	int pivot_value = arr[high];		//set pivot to last element of the arr
	
	int i = low;						//set i and j at first element
	for (int j = low; j<high; j++){
		if (arr[j] <= pivot_value){		//if arr[j] lesss than pivot, then set at the left side of the pivot
			swap(&arr[i], &arr[j]);		//swap
			i++;						
		}
	}
	swap(&arr[i], &arr[high]);			//swap arr[i] and the pivot, so it creates 2 partition (less than pivot, and more than pivot)
	
	return i;
}
