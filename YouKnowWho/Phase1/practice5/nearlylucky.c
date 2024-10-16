#include <stdio.h>

int main() {
    long long int n, digit;
    int count = 0;
    scanf("%lld", &n);
    for (long long int i = n; i > 0; i = i / 10) {
        digit = i % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
    }

    if (count == 4 || count == 7) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
