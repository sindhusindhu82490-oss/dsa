#include <stdio.h>

int main() {
    int arr[] = {10, 25, 7, 40, 15};
    int n = 5;
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}