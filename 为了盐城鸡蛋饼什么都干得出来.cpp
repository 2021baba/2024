#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // ����T������

    while (T--) {
        int n, m;
        scanf("%d %d", &n, &m);  // ����n��m
        int total_calories = n * m;  // �����ܿ�·��

        int x = 0, y = 0;

        // �ҵ����ŵ�x��y��ʹ��2*x + y = total_calories
        for (x = 0; x <= total_calories / 2; x++) {
            y = total_calories - 2 * x;  // ����y
            if (y >= 0) {
                printf("%d %d\n", x, y);
                break;
            }
        }
    }

    return 0;
}
