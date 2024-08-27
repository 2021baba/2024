#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // 输入T组数据

    while (T--) {
        int n, m;
        scanf("%d %d", &n, &m);  // 输入n和m
        int total_calories = n * m;  // 计算总卡路里

        int x = 0, y = 0;

        // 找到最优的x和y，使得2*x + y = total_calories
        for (x = 0; x <= total_calories / 2; x++) {
            y = total_calories - 2 * x;  // 计算y
            if (y >= 0) {
                printf("%d %d\n", x, y);
                break;
            }
        }
    }

    return 0;
}
