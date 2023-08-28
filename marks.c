#include<stdio.h>
int main()
  int e1,e2,e3;
  float avg;
  printf("Input e1 value : ");
  scanf("%d", &e1);
  printf("Input e2 value : ");
  scanf("%d", &e2);
  printf("Input e3 value : ");
  scanf("%d", &e3);
  avg=(e1+e2+e3)/3;
  if (avg>85) {
     printf("High Achiever");
}
 else if (avg>=70 && avg<=85) {
    printf("Pass");
}
 else (avg<70) {
   printf("Needs improvement ");
}
  return 0;
}
