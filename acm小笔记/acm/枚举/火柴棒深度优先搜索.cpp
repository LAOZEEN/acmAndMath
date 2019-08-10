#include<stdio.h>
int book[10],a[10],n=9,sum=0;
void dfs(int step)
{
	int i; 
	if(step==n+1&&100*a[1]+10*a[2]+a[3]+100*a[4]+10*a[5]+a[6]==100*a[7]+a[8]*10+a[9])
	{
		printf("%d%d%d+%d%d%d=%d%d%d\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
		sum++;
		return;
	}
	for(i=1;i<=9;i++)
	{
		if(book[i]==0)
		{
			a[step]=i;
			book[i]=1;
			dfs(step+1);
			book[i]=0;
		}
	}
	return;
 } 
 main()
{
	dfs(1);
		printf("%d",sum);
}
