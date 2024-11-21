/*
program desc: input 3 temperatures in f, then convert to c and display both temps side by side.
author: renee low
*/

#include <stdio.h>
#define SIZE 3

int main(){
	float fah[SIZE], cel[SIZE];
	int i;

	// prompting user for their input
	printf("Enter 3 values in fahrenheit:\n");
	for (i = 0; i < SIZE; i++){
		scanf("%f", &fah[i]);
	}

	// converting the fahrenheit to celsius
	for (i = 0; i < SIZE; i++){
		cel[i] = (fah[i]-32.0)*(5.0/9.0);
	}

	// printing results
	printf("\nfahrenheit\tcelsius");
	for (i = 0; i < SIZE; i++){
		printf("\n%2.1f\t\t%2.1f", fah[i], cel[i]);
	}
	
	return 0;
}
