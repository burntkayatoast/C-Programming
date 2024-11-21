/*
program desc: enter 5 integers into an array, and then copy the contents into a second array.
author: renee low
*/

#include <stdio.h>
#define SIZE 5

int main(){
	int arr[SIZE], copy[SIZE],i;

	// prompts users to enter in 5 integers
	printf("Enter 5 integers\n");
	for(i=0;i<SIZE;i++){
		scanf("%d", &arr[i]); //reads in user input
	}

	// copying the contents of the first array into a second array
	for(i=0;i<SIZE;i++){
		copy[i]=arr[i];
	}

	// prints the contents of the first array
	printf("orig: ");
	for (i = 0; i < SIZE; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");	//newine

  // prints the contents of the second array
	printf("copy: ");
	for (i = 0; i < SIZE; i++){
		printf("%d ", copy[i]);
	}
	
	return 0;
}
