#include<stdio.h>
int main()
{
	int s=0,i,n,m,k,g;
	scanf("\n%d",&m);
	scanf("\n%d",&n);
	scanf("\n%d",&k);
	for(i=1,g=0.02*m;i<=n;i++)
	{
		s=s+m;
		if(i%k==0)m=m-g;
	}
	printf("\n%d",s);
	return 0;
}
