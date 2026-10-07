#include<stdio.h>
void reverse_array(int arr[], int n);
void print_array(int arr[], int n);
int find_index(int arr[], int n, int target);
int main()
{
    int data[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(data) / sizeof(data[0]);

    print_array(data, n);          
    reverse_array(data, n);
    print_array(data, n);

    int idx = find_index(data, n, 40);
    printf("40 的下标：%d\n", idx);

    idx = find_index(data, n, 99);
    printf("99 的下标：%d\n", idx);
    return 0;
}
void reverse_array(int arr[], int n)
{
    for(int i = 0;i < n/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int find_index(int arr[], int n, int target)
{
    for(int i = 0; i < n ; i++)
    {
       if(arr[i] == target)
       {
          return i;
       }
    }
    return -1;
}
void print_array(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");
}