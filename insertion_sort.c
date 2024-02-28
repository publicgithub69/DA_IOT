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
