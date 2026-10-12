//Write a program to input two numbers and display their sum.
#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter the value of a & b");
scanf("%d%d",&a,&b);
c=a+b;
printf("The sum is %d",c);}

//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{int a,b,s,d,p,q;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
s=a+b;
p=a*b;
d=a-b;
q=a/b;
printf("The sum is %d",s);
printf("  The product is %d",p);
printf("  The difference is %d",d);
printf("  The quotient is %d",q);
}
