// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int findmax(int *, int);
int main()
{
    int num, i, size, a[50];
    system("cls");

    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("\nEnter the elements of an array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    num = findmax(a, size);
    printf("Largest number is %d", num);
    getch();
    return 0;
}
int findmax(int arr[], int s)
{
    int i, max = -99999999, temp;
    for (i = 0; i < s; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}