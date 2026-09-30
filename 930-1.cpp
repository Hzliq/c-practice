#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sum = a+b+c+d;
    float average = sum*1.0/4;
    printf("sum = %d\n",sum);
    printf("average = %.1f",average);
    return 0;
}
