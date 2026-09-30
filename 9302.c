#include <stdio.h>

int main()
{
    int a[10];
    int n;
    int sum = 0;          // 必须初始化为 0

    printf("请输入数字个数 n (n <= 10): ");
    if (scanf("%d", &n) != 1) {
        printf("输入错误！\n");
        return 1;
    }

    if (n > 10) {
        printf("n 不能超过 10\n");
        return 1;
    }

    printf("请输入 %d 个整数（用空格或回车分隔）：\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("输入的不是整数，程序退出。\n");
            return 1;
        }
        sum += a[i];
    }

    double average = sum * 1.0 / n;
    printf("平均值 = %.1f\n", average);
    printf("大于等于平均值的数有：\n");
    for (int j = 0; j < n; j++) {
        if (a[j] >= average) {
            printf("%d\n", a[j]);
        }
    }

    return 0;
}