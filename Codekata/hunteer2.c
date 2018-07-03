#include <stdio.h>

int main(void) {
	int n,a[100],i,j,temp,k=0,l,b[100],count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			b[k]=a[i];
			k++;
			count=count+1;
		}
	}
		if(count==0)
	{
		printf("-1");
	}
	else
	{
	for(k=0;k<count;k++)
	{
		for(l=k+1;l<count;l++)
		{
			if(b[k]>b[l])
			{
				temp=b[k];
				b[k]=b[l];
				b[l]=temp;
			}
		}
	}
	for(k=0;k<count;k++)
	{
		printf("%d ",b[k]);
	}
	}
	return 0;
}
