// 7. Write a function in C to count a total number of duplicate elements in an array.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void countd(int *, int);
int main()
{
    int i, size, a[10000] = {0}, t;
    system("cls");

    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter the elements of an array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &t);
        a[t]++;
    }
    countd(a, size);

    getch();
    return 0;
}
void countd(int arr[], int s)
{
    int count = 0;
    for (int i = 0; i < 10000; i++)
    {
        if (arr[i] == 2)
        {
            count++;
        }
    }
    printf("\nTotal no. of duplicate elements are %d", count);
}