#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort(int* arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void heap_sort()
{
    
    
}
void merge(int* a, int lb,int mid,int ub)
{
    int i,j,k;
    int lbarr[]
    int ubarr[]
}
void merge_sort(int* a, int lb,int ub)
{
    if(lb<ub)
    {
        mid = (lb+ub)/2 ;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
    
}

void display(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n");
}

int main()
{
    printf("Hello World");
    int arr[] = {4, 1, 45, 6, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Main Array : ");
    display(arr, n);
    insertion_sort(arr, n);
    printf("Sorted Array : ");
    display(arr, n);

    return 0;
}
