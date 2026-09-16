#include <stdio.h>

int main() 
{
    // /n==newline
    // decimal
    //十六进制 0123456789abcdef 0x
    //八进制 0
    //大小写有区别喵
    int a = 341;
    printf("Hello, GitHub!(%d)\n",a);
    int b = 0xabcd;
    printf("%x\n",b);
    a += 3;
    printf("a=%d",a);
    scanf("%d%d",&a,&b);
    // \n咋加啊不会
    return 0;
}