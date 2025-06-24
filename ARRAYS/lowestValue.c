//DSA (Array) - Find lowest Value

#include <stdio.h>

int main () {
	int size, i, lowest;
	
	printf("How many number you want to enter: ");
	scanf("%d", &size);
	
	//dynamic array
	int *myArr = (int *) malloc(size*sizeof(int));
	if (myArr == NULL){
		printf("Memory allocation failed!\n");
		return 1;
	}
	
	//read user input
	printf("\nINPUT\n");
	for (i = 0; i<size; i++){
		printf("Element - #%d: ", i);
		scanf("%d", myArr + i);
	}
	
	//assign 'lowest' variable value to the first element of the array
	lowest = *myArr;
	
	//find the lowest value
	for (i = 0; i<size; i++){
		if (*(myArr + i) < lowest){
			lowest = *(myArr + i);
		}
	}
	
	printf("\nOutput\n");
	printf("\nThe lowest value from the array is: %d\n", lowest);
	
	free (myArr);
	return 0;
}
