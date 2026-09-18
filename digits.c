#include<stdio.h>
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