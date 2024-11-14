#include <stdio.h>

int main() {
    int X, N;
    int arr[10000];
    scanf("%d %d", &X, &N);

    for (int i = 0; i < X; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < N)
            printf("%d ", arr[i]);
    }
}
