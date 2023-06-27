// 17. Write a program to insert a number at a given location in an array.

#include<stdio.h>

int main()
{
    int n, i, pos, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the number to be insert: ");
    scanf("%d", &pos);
    printf("Enter the value of number: ");
    scanf("%d",&arr[pos]);

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",arr[i]);
    }
    
}