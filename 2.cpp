#include <stdio.h>
#include <math.h>
int main()
{
   int x;
   double y;
   scanf("%d", &x);
   if (1 <= x && x<= 9       )

   
      y = x * x;
   
   else
   {
      if
      (
         //#2_begin------------
          (x < 100 && x % 2 == 0)||(x > 100 && x % 2 == 0)                     // <--第2空, 请把解答写在//左边, 本行上方切勿插入空行
         //#2_end==============     
      )
         y = 1.0/x;
      else 
      {
         if
         (
            //#3_begin------------
            x >= 1000 && (x / 100) % 10 == 3                     // <--第3空, 请把解答写在//左边, 本行上方切勿插入空行
            //#3_end==============                       
         )
            y = sqrt(x);
         else
            y = -1;
      }
   }
   printf("%lf\n", y);
   return 0;
}
