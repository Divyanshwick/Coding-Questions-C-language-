#include <stdio.h>
int main()
{int a,b;
 int r=0;
 int n=0;
 scanf("%d",&a);
 n=a;
 while(a>=1)
 {
   b=a%10;
  a=a/10;
   r=(r*10)+b;
 }

 if(r==n)
 {
   printf("Equal\n");
     }
 else
 {
   printf("Not Equal\n");
 }
 return 0;
}
