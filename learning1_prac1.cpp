#include<stdio.h>
int sum_array(int arr[], int n);
int max_array(int arr[], int n);
int min_array(int arr[], int n);
double average_array(int arr[], int n);
int range_array(int arr[], int n);  
void print_array(int arr[], int n);

int main()
{
    int data[] = {23, 25, 21, 27, 24, 26, 22, 28};
    int n = sizeof(data)/sizeof(data[0]);
    print_array(data,n);
   
    return 0;
}

int sum_array(int arr[], int n)
{
    int sum;
    for(int i = 0;i < n;i++)
    {
       sum += arr[i];
    }
    return sum;
}

int max_array(int arr[], int n)
{
    int max_array = arr[0];
    for(int i = 0;i < n;i++)
    {
        if(max_array < arr[i])
       {
           max_array = arr[i];
       }
    }
    return max_array;
}

int min_array(int arr[], int n)
{
    int min_array = arr[0];
    for(int i = 0;i < n;i++)
    {
        if(min_array > arr[i])
       {
           min_array = arr[i];
       }
    }
    return min_array;
}
void print_array(int arr[],int n)
{
    int delta = max_array(arr,n) - min_array(arr,n);
    printf("%d",delta);
}
