// Write a program to reverse the number using function (1234 to 4321) 

#include<stdio.h>

void rev(int num)
{
    int rem, reve=0;
    while(num!=0)
    {
        rem=num%10;
        reve=reve*10+rem;
        num=num/10;
    }
    printf("reverse number is :%d",reve);
}
int main ()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    rev(n);
}