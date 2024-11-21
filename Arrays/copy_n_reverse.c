/*
program desc: enter 5 values into an array, then copy the original array into another array in reverse array.
author: renee low
*/

#include <stdio.h>
#define SIZE 5

int main(){
	int arr[SIZE], CR[SIZE],i;

  //prompting user to enter 5 integers
	printf("Enter 5 integers:\n");
	for (i = 0; i < SIZE; i++){
		scanf("%d", &arr[i]);
	}

	// copying entered integers in reverse
	for (i = 0; i < SIZE; i++){
		CR[SIZE-i-1] = arr[i];
	}
	
	// printing original (unreversed)
	printf("\noriginal copy: ");
	for (i = 0; i < SIZE; i++){
		printf("%d ", arr[i]);
	}
	// printing reversed copy
	printf("\nreversed copy: ");
	for (i = 0; i < SIZE; i++){
		printf("%d ", CR[i]);
	}
	
	return 0;
}
