#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;

    // 1. ���û�����������
    printf("������һ��������: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;  // ȡ��ǰ���ֵ����һλ
        reversed = reversed * 10 + remainder;  // ������ӵ���ת���������
        num /= 10;  // ȥ�����ֵ����һλ
    }

    // �ж�ԭʼ�����뷴ת��������Ƿ����
    if (original == reversed) {
        printf("Yes\n");  // �ǻ�����
    } else {
        printf("No\n");  // ���ǻ�����
    }

    return 0;
}
