// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, arr[] = {32, 29, 40, 12, 70}, n, times, temp;
    system("cls");

    printf("Array is : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter the value of n to shift digits on left side : ");
    scanf("%d", &times);
    for (n = times; n >= 1; n--)
    {
        temp = arr[0];
        for (i = 0; i < 5; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[4] = temp;
    }
    printf("\nModified array is : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}