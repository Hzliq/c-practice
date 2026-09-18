#include<stdio.h>
//判断给定的n位数
int main()
{
    int n , num;
    scanf("%d",&n);
    while(n != 0)
    {
          n = n / 10;
          num ++;
    }
    printf("%d",num);
    return 0;
}