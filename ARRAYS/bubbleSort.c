//DSA (Array) - bubbleSort

#include <stdio.h>
#include <stdlib.h>

int main () {
	int size, i, j, temp;
	
	printf("Input array size: ");
	scanf("%d", &size);
	
	//allocate memory for array
	int *myArr = (int *) malloc (size*sizeof(int));
	if (myArr == NULL){
		printf("Memory allocation failed!\n");
		return 1;
	}
	
	//read user input
	for (i = 0; i<size; i++){
		printf("Element - #%d: ", i+1);
		scanf("%d", myArr + i);
	}
	
	//bubble sort
	printf("\nBubble Sort: (lowest to highest)\n");
	for (i = 0; i<size-1; i++){					//pick one value    (nested loops)
		for (j = 0; j<size-1-i; j++){						//compare with every array element	
			if (*(myArr + j) > *(myArr + j + 1)){			
				temp = *(myArr + j);					//swap value if arr[x] > arr[x+1]
				*(myArr + j) = *(myArr + j + 1);
				*(myArr + j + 1) = temp; 
			}
		}	
	}
	
	//print output
	for (i = 0; i<size; i++){
		printf("Element - #%d: %d\n", i+1, *(myArr + i));
	}
	
	//free memory
	free(myArr);
	return 0;
}
