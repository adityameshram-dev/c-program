// Write a program to perform both implicit and explicit typecasting. 

#include<stdio.h>

int main() {
    
    float b = 10;
    printf("Implicit Typecast b = %f",b);

    int a = (float)10.5;
    printf("\nExplicit Typecast a = %d",a);

    return 0;
}