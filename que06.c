// Write a program to print the largest among two numbers using conditional and relational operator. 

#include<stdio.h>

int main() {

    int n1,n2;
    printf("Enter two Number: ");
    scanf("%d%d",&n1,&n2);

    // Conditional operator.
    n1 > n2 ? printf("%d is largest number than this %d number",n1,n2) : printf("%d is largest number than this %d number",n2,n1);

    // Using relational operator. 
    if(n1>n2) {
        printf("\n%d is largest number than this %d number",n1,n2);
    }
    else {
        printf("\n%d is largest number than this %d number",n2,n1);
    }
    return 0;
}