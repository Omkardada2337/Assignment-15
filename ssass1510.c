// 10. Write a function in C to count the frequency of each element of an array.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void frequency(int *);
int main()
{
    int i, size, a[100000] = {0}, t;
    system("cls");

    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("\nEnter the elements of an array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &t);
        a[t]++;
    }
    frequency(a);

    getch();
    return 0;
}
void frequency(int arr[])
{
    int i;
    for (i = 0; i < 100000; i++)
    {
        if (arr[i] >= 1)
        {
            printf("Frequency of %d : %d \n", i, arr[i]);
        }
    }
}