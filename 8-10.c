#include<stdio.h>
int main()
{
    int a , b;
    scanf("%d" , &a);
    
    printf("%o" , a);
    return 0;
}
#include <stdio.h>

// #include <stdio.h>

// int main()
// {
//     int a;
//     char buf[20];     // 定义一个字符数组，用来存结果

//     printf("请输入一个十进制整数: ");
//     scanf("%d", &a);

//     sprintf(buf, "%o", a);   // 把 a 按八进制格式，"写进" buf 字符串里

//     printf("八进制结果存在变量 buf 里: %s\n", buf);

//     // 现在 buf 就是一个真正的字符串了，你可以反复用它
//     printf("再用一次 buf: 它的值是 %s\n", buf);

//     return 0;
// }
