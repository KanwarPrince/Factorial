#include<stdio.h>
void main()
{
  int i,a[20],n,f=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f=f*a[i];
    }
  printf("%d",f);
}
