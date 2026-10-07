#include<stdio.h>
int max2(int a,int b);
int max3(int a,int b,int c);
void print_chars(char ch,int n);
int sum_array(int arr[], int n);
int max_array(int arr[], int n);
double average_array(int arr[], int n);
int main()
{
    
    return 0;
}
//最大值
int max2(int a,int b)
{
    return a>b ? a:b;
}
int max3(int a,int b,int c)
{
    return max2(max2(a,b),c);
}
//打印n个字符
void print_chars(char ch,int n)
{
     for(int i = 0 ; i < n ; i++)
     {
        printf("%c",ch);
     }
     printf("\n");
}
//数组传参
//sizeof不可用
int sum_array(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
//maxarr
int max_array(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
//
double average_array(int arr[], int n) {
    return (double)sum_array(arr, n) / n;
}
//值传递
/*只改变本函数内部副本a b的数值
为什么没交换：

函数参数 a、b 是副本。

函数内交换的是副本，不影响外面的 x、y。
*/
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
//通过指针改变了main内的变量值，和上一个形成对比
void swap_by_pointer(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}