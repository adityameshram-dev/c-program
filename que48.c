//  Write a program to print element of array using pointer.

#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int *ptr = &arr[0];
    int n = sizeof(arr)/sizeof(arr[0]), i;

    for(i=0;i<n;i++) {
        printf("%d ",*ptr);
        ptr++;
    }

    return 0;
}
