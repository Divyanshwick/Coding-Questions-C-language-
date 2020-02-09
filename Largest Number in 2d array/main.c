#include <stdio.h>
int main()
{
  int m,n,i,j,k;
  scanf("%d %d",&m,&n);
  int a[m][n];
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  k=a[0][0];
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    { if(a[i][j]>k)
        k=a[i][j];
  }
  }
  printf("%d",k);

  return 0;
}
