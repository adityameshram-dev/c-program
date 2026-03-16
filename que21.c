// Write a program to print fibonacci series of n terms starting from 0 and 1. (Accept value of n from user) 

#include<stdio.h>

int main() {
    int term;
    int f1=0,f2=1,f3;

    printf("Enter term for fibonacci serice: ");
    scanf("%d",&term);

    for(int i=0; i<term; i++) {
        printf("%d ",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }

    return 0;
}