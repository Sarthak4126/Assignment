

//2. Write a C program to swap two numbers without using a third variable.			
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b before swapping:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" The value of a and b after swapping %d %d",a,b);
    return 0;
}
