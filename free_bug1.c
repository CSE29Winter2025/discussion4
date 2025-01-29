#include <stdio.h>
#include <stdlib.h>

int main() {
    int init_val = -1;

    // Allocate memory for array
    int* arr = malloc(3 * sizeof(int));

    // Print starting address of array
    printf("Pointer address: %p\n", arr);
    
    // Set initial values
    for (int i = 0; i < 3; i++) {
	arr[i] = init_val;
    }

    // Print initial values
    for (int i = 0; i < 3; i++) {
	printf("%d\n", arr[i]);
    }
    
    // Print starting address of array
    printf("Pointer address: %p\n", arr);

    return 0;
}
