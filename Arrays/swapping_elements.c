/*
program desc: enter 4 integers, display the orignal array, then swap the 1st element with the second, doing the same with the 3rd and 4th.
author: renee low
*/

#include <stdio.h>
#define SIZE 4

int main(){
	int arr[SIZE],i,temp;

  // prompting user to inut 4 integers
	printf("Enter 4 integers:\n");
	for (i = 0; i < SIZE; i++){
		scanf("%d", &arr[i]);
	}
	
	// printing original array
	printf("Original array: ");
	for (i = 0; i < SIZE; i++){
		printf("%d ", arr[i]);
	}

	// swapping elements
  // i+=2 skips a[2] and moves on to the next element
	for (i = 0; i < SIZE; i+=2){
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}

  // prints out the final result
	printf("\nSwapped array: ");
	for (i = 0; i < SIZE; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
