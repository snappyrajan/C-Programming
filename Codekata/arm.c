#include <stdio.h>

int main()
{
    int rem,sum=0,t,n;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==t)
        printf("yes");
    else
        printf("no");

    return 0;
}
