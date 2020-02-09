#include <stdio.h>
int m,n,i,j;
#define s1(m) for(i=0;i<m;i++)
#define s2(n) for(j=0;j<n;j++)
int main()
{ scanf("%d %d",&m,&n);
 int a[m][n],b[m][n];
 s1(m)
 {
   s2(n)
     scanf("%d",&a[i][j]);
 }
  s1(m)
  {
    s2(n)
      scanf("%d",&b[i][j]);
  }
 s1(m)
 {
   s2(n){
     printf("%d ",a[i][j]+b[i][j]);
 }
   printf("\n");
 }

  return 0;
}
