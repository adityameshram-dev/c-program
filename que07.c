// Write a program using conditional operator to check whether a user can vote or not based on their age. 

#include<stdio.h>

int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    
    age > 18 ? printf("You can vote") : printf("You can't vote");

    return 0;
}