#include<stdio.h>
int main()
{
    int n,a[10],sum=0,cau = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
       scanf("%d",&a[i]);
       sum += a[i];
    }
    double average = sum*1.0/n;
    for(int j = 0;j<n;j++)
    {
       if(a[j]>=average)
       {
        printf("%d\n",a[j]);
        cau++;
       }
    }
    printf("%d个",cau);
    return 0;
}