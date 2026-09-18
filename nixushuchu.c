#include<stdio.h>
int main()
{
    int num,n,a;
    scanf("%d",&num);
    n = num;
    do
    {
       a = n % 10;
       n = n / 10; 
       printf("%d",a);
    }while(n != 0);
    return 0;
}