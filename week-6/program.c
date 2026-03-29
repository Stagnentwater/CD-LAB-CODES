#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr, i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    if (!arr) return 1;
    printf("Enter values\n");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Heap values: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    printf("Memory freed\n");
}
