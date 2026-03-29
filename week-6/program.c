#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr = malloc(5 * sizeof(int)), i;
    if (!arr) return 1;
    for (i = 0; i < 5; i++) arr[i] = (i + 1) * 10;
    printf("Heap values: ");
    for (i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    printf("Memory freed\n");
}
