#include<stdio.h>

main()
{
	int a[100],i,n;
	printf("Enter the array size ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("negative eliment=%d ",a[i]);
		}
	}
}


