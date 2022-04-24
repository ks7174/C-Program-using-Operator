/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   int a,b,c,d,e,f,g;
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    if(a>b && a>0 && b>0){
        printf("The arithmetic operations for the given numbers are:");
        c=a+b;
        d=a-b;
        e=a*b;
        f=a/b;
        g=a%b;
        printf("\nThe sum of the two numbers are:%d",c);
        printf("\nThe difference of the two numbers are:%d",d);
        printf("\nThe product of the two numbers are:%d",e);
        printf("\nThe quotient of the two numbers are:%d",f);
        printf("\nThe remainder of the two numbers are:%d",g);}
    else{
        printf("Sorry,the program cannot be run with the given numbers");
        ++a;}
    return 0;
}
