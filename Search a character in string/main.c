#include <stdio.h>
int main()
{int i,n,c=0;
 char str[100],b;
 scanf("%s\n",str);
 scanf("%c",&b);
 i=0;
 while(str[i]!='\0')
 {
   if(str[i]==b)
     c++;
   i++;
 }
 if(c>0)
   printf("%d",c);
  else
   printf("Not Present");
    return 0;
}
