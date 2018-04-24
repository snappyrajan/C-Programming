#include <stdio.h>
int main()
{
    int n,rem=0,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        c++;
    }
    printf("%d",c);
    return 0;
}
