#include<stdio.h>
void main()
{
  int n;
  scanf("%d"&n);
  if(n>=1&&n<=100000)
    if(n>=1)
         printf("POSITIVE");
    elseif(n==0)
         printf("ZERO");
    else
         printf("NEGATIVE");
  else
    printf("INVALID");
 }
