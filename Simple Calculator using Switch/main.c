#include <stdio.h>
int main()
{
  float a,b,c,e,f,g;
  char d;
  scanf("%f %c %f",&a,&d,&b);
 switch(d)
  {
    case '*':
      {
        c=a*b;
          printf("%.2f",c);
        break;
      }
       case '+':
      {
       e=a+b;
          printf("%.2f",e);
        break;
      }
    case '-':
      {
       f=a-b;
          printf("%.2f",f);
       break;
      }
    case '/':
      {
        g=a/b;
          printf("%.2f",g);
        break;
      }
     }
  return 0;
}
