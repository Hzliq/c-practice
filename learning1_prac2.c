#include<stdio.h>
int maxf(int arr[], int n);
int minf(int arr[], int n);
void find_max_min(int arr[], int n, int *max, int *min);
void swap_int(int *a, int *b);
int main()
{
int data[] = {18, 42, 7, 33, 25, 9, 50, 16};
int max, min;
int n = 8;
find_max_min(data, n, &max, &min);
printf("最大值：%d，最小值：%d\n", max, min);

swap_int(&max, &min);
printf("交换后：最大值=%d，最小值=%d\n", max, min); 
    return 0;
}

int maxf(int arr[], int n)
{
    int max_va = arr[0];
    for(int i = 0;i < n;i++)
    {
        if(max_va < arr[i])
       {
           max_va = arr[i];
       }
    }
    return max_va;
}

int minf(int arr[], int n)
{
    int min_va = arr[0];
    for(int i = 0;i < n;i++)
    {
        if(min_va > arr[i])
       {
           min_va = arr[i];
       }
    }
    return min_va;
}
void find_max_min(int arr[], int n, int *max, int *min)
{
    *max = maxf(arr,n);
    *min = minf(arr,n);
}
void swap_int(int *max, int *min)
{
    int temp = *max;
    *max = *min;
    *min = temp;
}