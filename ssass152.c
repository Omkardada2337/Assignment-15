// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int findmin(int *, int);
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
    num = findmin(a, size);
    printf("Smallest number is %d", num);
    getch();
    return 0;
}
int findmin(int arr[], int s)
{
    int i, min = 9999999;
    for (i = 0; i < s; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}