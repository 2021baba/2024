#include <stdio.h>

int main() {
    long long num, sum = 0;
    scanf("%d", &num);

    while (num > 0) {
        sum += num % 10;  // 获取最低位数字并累加到sum中
        num /= 10;        // 去掉最低位
    }
    printf("该整数中所有数字之和为: %d\n", sum);

    return 0;
}
