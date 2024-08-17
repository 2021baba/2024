#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;

    // 1. 让用户输入正整数
    printf("请输入一个正整数: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;  // 取当前数字的最后一位
        reversed = reversed * 10 + remainder;  // 将其添加到反转后的数字中
        num /= 10;  // 去掉数字的最后一位
    }

    // 判断原始数字与反转后的数字是否相等
    if (original == reversed) {
        printf("Yes\n");  // 是回文数
    } else {
        printf("No\n");  // 不是回文数
    }

    return 0;
}
