#include <stdio.h>
int main()
{
int a,b,mul;
  int i=1;
  scanf("%d  %d",&a,&b);
  while(i<=b)
  {
    mul=a*i;
    printf("%d\n",mul);
    i=i+1;
  }
    return 0;
}
