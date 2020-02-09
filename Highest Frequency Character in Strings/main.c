#include <stdio.h>
int main()
{
  int i,j,count=0,max,c,m=0;
  char s[100];
  scanf("%s",s);
  for(i=0;i<100;i++)
  {
    if(s[i]=='\0')
      break;
    count=1;
    for(j=i+1;j<100;j++)
    {
      if(s[i]==s[j])
      {
        count++;
      }
      if(count>m)
      {
        m=count;
        c=s[i];
      }

    }
  }printf("%c",c);
  return 0;
}
