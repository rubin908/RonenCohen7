#include <stdio.h>
void main()
{
  int n;
  printf("enter the num\n");
  scanf("%d",&n);
  switch(n)
  {
    case 1:
      printf("Sunday");
      break;
    case 2:
      printf("monday");
      break;
      
    default:
      printf("Error");
    
   }
}