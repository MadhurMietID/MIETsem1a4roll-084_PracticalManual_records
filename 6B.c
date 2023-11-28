/*C program for bubble sort uses the Nested For Loop to sort the One Dimensional Array elements
 in ascending order.*/
#include <stdio.h>
int main()
{
    int number, i, j, temp;   
    printf("\n Please Enter the total Number of Elements  :  ");
    scanf("%d", &number);    
    printf("\n Please Enter the Array Elements  :  ");
    int a[number];
    for(i = 0; i < number; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < number - 1; i++)
    {
        for(j = 0; j < number - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\n List Sorted in Ascending Order : ");
    for(i = 0; i < number; i++)
    {
        printf(" %d \t", a[i]);
    }
    printf("\n");
    return 0;
}
