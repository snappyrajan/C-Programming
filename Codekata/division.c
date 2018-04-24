#include <stdio.h>
int main()
{
    int a,b,s=0,x=0,c=0;
    scanf("%d%d",&a,&b);
    s=b%a;
    x=(b-s);
    while(x!=0)
    {
        x=x-a;
        c++;
    }
    printf("%d",c);
    return 0;
}
