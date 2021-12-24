#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k;
	
	printf("Enter number\n");
	scanf("%d",&n);
	
	k=sqrt(n);
	
	int prime[n];
	for(i=2;i<n;i++)
	{
		prime[i]=i;
	}
	
	for(i=2;i<=k;i++)
	{
		for(j=2;j<=n;j++)
		{
			if(prime[j]!=1)
			{
				if(j%i==0 && j>=i*i)
				prime[j]=1;
			}
		}
	}
	
	for(i=2;i<=n;i++)
	{
		if(prime[i]!=1)
		printf("%d, ",i);
	}
	return 0;
}
