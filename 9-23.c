#include<stdio.h>
int main()
{
    char c = 1000;
    unsigned char a = 16,b = 17,d = 65;
    c = a * b;
    printf("%u\n",2147483648);
    //256+16
    printf("%d\n",(int)(signed char)251);
    //singed char -5 = 251 - 256
    printf("%d\n",70000ll*80000);
    printf("%c\n",d);
    printf("%d\n",-printf("hello\n"));
    //六个字符
    int e = 10;
    scanf("%d" , &e);
    printf("%d\n",-abs(e));
    return 0;
}
//int = 8 bytes = 32bits
//char 
//unsigned char = 8 bits
//unsigned 无符号 %u %hhu %lu %hu = short unsigned
/*
char a = 0;8
short 16
int 32
long long 64位 
*/


/*
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
