#include<stdio.h>
#include<math.h>
int main()
{
    double a = 1.0;
    scanf("%lf",&a);

    int ac = a*10;
    int b = (int)log10(ac);
    int k = b;
    int c[100];
    for(int i = 0;i<=b;i++)
    {
        c[i] = ac % 10;
        ac /= 10;
    }
    printf("%d.",c[0]);
    for(int j = 1;j<=b;j++)
    {
       printf("%d",c[j]);
    }
    return 0;
}
/p5705