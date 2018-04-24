#include <stdio.h>
int main()
{
    int n,k,a[30],s=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d\t",&a[i]);
    for(int i=0;i<k;i++)
        s=s+a[i];
    printf("\n%d",s);
    return 0;
}
  
