#include <stdio.h>

void printing(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void prime(int arr[], int n) {
    printf("Prime numbers: ");
    int sum=0;
    for (int i = 0; i < n; i++) {
        int is_prime = 1;

        if (arr[i] <= 1) {
            continue;
        }

        for (int j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", arr[i]);
            sum=sum+arr[i];
        }
    }
    printf("\n sum=%d ",sum);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printing(arr, n);
    prime(arr, n);

    return 0;
}
