#include<stdio.h>
int main()
{
	int n,i,even;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%\nd",i);
		}
	}
	return 0;
}