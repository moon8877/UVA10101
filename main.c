#include <stdio.h>
#include <stdlib.h>
void change(long long int);
int main()
{
  long long int value;
  int i=1;
  while(scanf(" %lld",&value)==1)
  {
    printf("  %2d.",i);
    if(value==0)
    {
      printf(" %lld",value);
    }
    else
    {
     change(value);
    }
    printf("\n");
    i++;
  }

return 0;
}
void change(long long int a)
{ int kuti,lakh,hajar,shata;
  if(a>10000000)
  {
    change(a/10000000);
    a=a%10000000;
    printf(" kuti");
  }   
  kuti=a/10000000;
  a=a%10000000;
  lakh=a/100000;
  a=a%100000;
  hajar=a/1000;
  a=a%1000;
  shata=a/100;
  a=a%100;
  if(kuti!=0)
  {
   printf(" %d kuti",kuti);
  }
  if(lakh!=0)
  {
   printf(" %d lakh",lakh);
  }
  if(hajar!=0)
  {
   printf(" %d hajar",hajar);
  }
  if(shata!=0)
  {
   printf(" %d shata",shata);
  }
  if(a!=0)
  {
   printf(" %d",a);
  }
}
