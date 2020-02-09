#include <stdio.h>
int m,n,i,j;
#define s1(m) for(i=0;i<m;i++)
#define s2(m) for(j=0;j<m;j++)
int main()
{scanf("%d",&m);
 int a[m][m],sum=0;
 s1(m)
{
  s2(m)
    scanf("%d",&a[i][j]);
}
 s1(m)
 {
   s2(m)
   {if(i+j==m-1)
     sum=sum+a[i][j];
 }
 }
 printf("%d",sum);

  return 0;
}
