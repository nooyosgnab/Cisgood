#include <stdio.h>

int main() {

    int N, num;
    scanf("%d", &N);

    int count[10001] = {0, };

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        count[num] += 1;
    }

    for (int i = 0; i < 10001; i++) {
        for (int j = 1; j <= count[i]; j++) {
            printf("%d\n", i);
        }
    }
    return 0;
}
