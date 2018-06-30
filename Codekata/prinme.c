#include <stdio.h>
int main()
{   int t=0,n,i;
    scanf("%d",&n);
    if(n<=1000)
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                t++;
            }
        }
        if(t==0)
            printf("yes");
        else
            printf("no");   
    }
    else
        printf("no");
    return 0;
}
