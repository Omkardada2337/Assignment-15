// 8. Write a function in C to print all unique elements in an array.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void countd(int *);
int main()
{
    int i, size, a[10000] = {0}, t;
    system("cls");

    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("\nEnter the elements of an array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &t);
        a[t]++;
    }
    countd(a);

    getch();
    return 0;
}
void countd(int arr[])
{
    printf("\nUnique elements in the array are : ");
    for (int i = 0; i < 10000; i++)
    {
        if (arr[i] == 1)
        {
            printf("%d ", i);
        }
    }
}