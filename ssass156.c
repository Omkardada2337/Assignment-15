// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void reverse(int *, int);
int main()
{
    int i, size, a[20];
    system("cls");

    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("\nEnter the elements of an array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    reverse(a, size);

    getch();
    return 0;
}
void reverse(int arr[], int s)
{
    int i;
    printf("\nReversed array is : ");
    for (i = s - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}