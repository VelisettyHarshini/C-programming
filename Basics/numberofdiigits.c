//write a c-programm to count a number of digits in a number
#include<stdio.h>
#include<math.h>
  int main() {
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
 int digitcount=log10(n)+1;
 printf("%d",digitcount);
 return 0;
 }
