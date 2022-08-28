// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int checkd(int *, int);
int main()
{
    int i, size, a[20], rep;
    system("cls");

    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("\nEnter the elements of an array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    rep = checkd(a, size);
    printf("first adjacent duplicate number in array is %d", rep);

    getch();
    return 0;
}
int checkd(int arr[], int s)
{
    int i, j;
    for (i = 0; i < s; i++)
    {
        if (arr[i + 1] == arr[i])
        {
            return arr[i];
        }
    }
}