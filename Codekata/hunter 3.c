#include <stdio.h>

int main(void) {
	int n,a[100],b[100],count,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				b[j]=0;
			}
		}
	if(b[i]!=0)
	{
		b[i]=count;
	}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==1)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}
