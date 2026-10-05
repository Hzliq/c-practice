#include <stdio.h>
#include <math.h>
// 输入n 计算 1-1/3+1/5……前n项
int main()
{
    int n = 15;
    double sum = 0;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
     
          sum = sum + pow(-1.0,i - 1)/(2*i - 1);
    }
    printf("%lf",sum);
    return 0;
}
//也可以多个变量在循环内 = - / = +2 / 
