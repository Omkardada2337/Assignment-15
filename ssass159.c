// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void sortd(int *);
int main()
{
    int i, a[5], b[5], c[10];
    system("cls");

    printf("Enter the 5 elements of array 1 : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the 5 elements of array 2 : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < 10; i++)
    {
        if (i >= 0 && i <= 4)
            c[i] = a[i];
        else
            c[i] = b[i - 5];
    }
    sortd(c);
    getch();
    return 0;
}
void sortd(int arr[])
{
    int i, j, t;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[j] > arr[i])
            {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    printf("\nSorted array is : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}