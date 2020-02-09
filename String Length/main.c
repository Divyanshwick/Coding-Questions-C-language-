#include <stdio.h>
int main()
{int i,t;
 char a[100];
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {scanf("%s",a);
 int j=0,c=0;
  while(a[j]!='\0')
        {
          c++;
          j++;
        }
        printf("%d\n",c);
 }
          return 0;
        }
