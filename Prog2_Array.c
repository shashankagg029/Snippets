#include<stdio.h>
// removed conio dependency

int showarr(int *arr, int *size)
{
    for (int i = 0; i < *size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return
}

int addelement(int *arr, int *size, int index, int value)
{
    for (int i = *size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    *size += 1;
    return
}

int delelement(int *arr, int *size, int index)
{   
    for (int i = index; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    *size -= 1;
    return
}

int main()
{
    int size;
    int arr[20] = {1, 5, 7, 12};
    size = 4;
    showarr(arr, &size);
    addelement(arr, &size, 3, 6);
    showarr(arr, &size);
    delelement(arr, &size, 2);
    showarr(arr, &size);
    return 0;
}
