//write a Cprogramming to calculate sum of two numbers if the user enter +,difference of twonumbers if the user enters -,product of two numbers if users enters  /.

#include<stdio.h>
int main()
{
int a,b;
char operand;

printf("Enter Two numbers:");
scanf("%d %d",&a,&b);
printf("Enter Operand:");
scanf("\n%c",&operand);
if(operand== '+')
{
printf("%d",a+b);
}
else if(operand== '-')
{
printf("%d",a-b);
}
else if(operand=='*')
{
printf("%d",a*b);
}
else if(operand=='/')
{
printf("%d",a/b);
}
else 
{
printf("Enter valid operand");
}
return 0;
}
