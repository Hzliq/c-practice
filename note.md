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

/*这个之后理解*/

//存储变量
/char 
//unsigned char = 8 bits
//unsigned 无符号 %u %hhu %lu %hu = short unsigned
/*
char a = 0;8
short 16
int 32
long long 64位 

1. **`char`**：专门用来存**ASCII 字符**（字母、数字，0~127），这是它原本设计用途。存普通字符 `'A'`、`'0'`，用 char。
2. **`signed char`**：需要**1 字节的有符号整数**，范围 - 128~127 时使用。
3. **`unsigned char`**：
   - 存图像像素、二进制原始字节、颜色值（0~255）
   - 需要 1 字节无符号整数的时候使用
 */


/*
在前面加空格 `scanf(" %c", &ch);`
`" %c"` 格式里**空格代表：跳过所有空白字符（空格、回车、tab）**，再读一个字符。
*/


//    // /n==newline
    // decimal
    //十六进制 0123456789abcdef 0x
    //八进制 0
    //大小写有区别喵