#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

//VectorRead function
//Reads vector from stdin
void VectorRead(Vector *V) {
	printf("%d", V->size);
    // Loop through size of vector and ask for each vector, (or all in one row if the user desires)
	for (int i = 0; i < sizeof(V) / sizeof(V[0]); i++) {
		printf("%d ", V->item[i]);
	}
}

//vectorInit function
//Initializes the vector
void vectorInit(Vector *V, int size) {
	V->size = size;
	V->item = malloc(sizeof(int) * V->size);
}

//vectorAdd function
//Adds the vector to var
void vectorAdd(Vector *V, int var, int index) {
	V->item[index] = var;
}

//vectorPrint function
//Prints the vector value
void vectorPrint(Vector *V) {
	for (int i = 0; i < V->size; i++) {
		printf("Vector Val: %d\n", V->item[i]);
	}
}
