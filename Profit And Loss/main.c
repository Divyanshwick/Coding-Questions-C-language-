#include <stdio.h>
int main()
{int a,b,c;
 scanf("%d\n%d",&a,&b);
 if(b>a)
 {
   c=b-a;
   printf("Profit\n%d",c);
 }
else if(a>b)
{
  c=a-b;
  printf("Loss\n%d",c);
}
 else
 {
   printf("No Profit No Loss\n");

}
     return 0;
}
