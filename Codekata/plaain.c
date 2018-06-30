#include <stdio.h>
int main()
{   int t,n,i,rem=0,rev=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(t==rev)
        printf("yes");
    else
        printf("no");
    return 0;
}
