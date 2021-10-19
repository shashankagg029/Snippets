#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
}arr;

void createArray(arr *a, int tSize, int uSize)
{
    (*a).total_size = tSize;
    (*a).used_size = uSize;
    (*a).ptr = (int *)malloc(tSize * (sizeof(int)));
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &(a->ptr)[i]);
    }
}

void show(arr *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Element %d : %d\n", i + 1, (a->ptr)[i]);
    }
    
}

void main()
{
    arr marks;
    printf("\n\nInitial Size : %d\n\n", sizeof(marks));
    createArray(&marks, 10, 5);
    show(&marks);
    printf("\n\nFinal Size : %d\n\n", sizeof(marks));
    getch();
}