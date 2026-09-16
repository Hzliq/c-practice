 #include<stdio.h>
 int main()
 {
    
    //if %.2f  scanf
    double x,y;
    printf("enter x:\n");
    scanf("%lf",&x);
    if(x <= 15)
    {
        y = 4*x/3;
    }
    else
    {
        y = 2.5*x-10.5;
    }
    printf("水费是y = f(%lf) = %.2f元",x,y);
    return 0;
 }