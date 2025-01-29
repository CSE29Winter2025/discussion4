#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

void print_2d_arr(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
	for (int j = 0; j < cols; j++) {
	    printf("%d ", arr[i][j]);
	}
	printf("\n");
    }
}

int main() {

    int init_val = -1;
    // printf("%ld\n", sizeof(int*));
    // printf("%ld\n", sizeof(int));

    // Allocate rows
    int** arr = malloc(ROWS * sizeof(int*));

    // Allocate columns
    for (int i = 0; i < ROWS; i++) {
	arr[i] = malloc(COLS * sizeof(int));
	
	// Set initial values
	for (int j = 0; j < COLS; j++) {
	    arr[i][j] = init_val;
	}
    }

    // Print array
    print_2d_arr(arr, ROWS, COLS);

    // Free array
    free(arr);

    return 0;
}
