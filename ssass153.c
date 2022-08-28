// 3. Write a function to sort an array of any size. (TSRS)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int *sort(int *, int);
int main()
{
    int i, size, arr[20], *p;
    system("cls");

    printf("Enter the size of an array : ");
    scanf("%d", &size);
    printf("Enter the elements of an array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    p = sort(arr, size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", p[i]);
    }

    getch();
    return 0;
}
int *sort(int a[], int s)
{
    int i, j, t;
    for (i = 0; i <= s - 2; i++)
    {
        for (j = i + 1; j <= s - 1; j++)
        {
            if (a[j] < a[i])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    return a;
}