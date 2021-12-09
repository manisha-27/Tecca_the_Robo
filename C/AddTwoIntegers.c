#include <stdio.h> 

int main() {
	int t,i;
	scanf("%d",&t);
	
	int a[t],b[t],c[t];
	
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&a[i],&b[i]);
	    printf("\n");
	    
	}
	
	for(i=0;i<t;i++)
	{
	    c[i]=a[i]+b[i];
	    printf("%d\n",c[i]);
	}

	return 0;
}
