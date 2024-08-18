#include <stdio.h>

int judge(int num) {
    int reversed = 0, original = num;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int n, i, count = 0;

    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (judge(i)) {
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}
