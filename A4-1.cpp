#include <stdio.h>

int main() {
    long long num, sum = 0;
    scanf("%d", &num);

    while (num > 0) {
        sum += num % 10;  // ��ȡ���λ���ֲ��ۼӵ�sum��
        num /= 10;        // ȥ�����λ
    }
    printf("����������������֮��Ϊ: %d\n", sum);

    return 0;
}
