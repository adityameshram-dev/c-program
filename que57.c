// Write a program to find lenth of array without using loop

#include<stdio.h>

int main()
{
    int arr = {1,2,3,4,5};
    int len;

    len = sizeof(arr)/sizeof(arr[0]);

    printf("Length of array: ",len);

    return 0;
}