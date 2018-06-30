#include <stdio.h>
int main()
{   int n,b,i,sum=1;
    scanf("%d%d",&n,&b);
    for(i=0;i<b;i++)
    {
        sum=sum*n;
    }
    printf("%d",sum);
    return 0;
}
