#include<stdio.h>
int min=999999,book[101],n,e[101][101];
void dfs(int cur,int dis)
{
	int j;
	if(min<dis)return;
	if(cur==n)
	{
		if(min>dis)
		{
			min=dis;
		}
			return;
	}
	for(j=1;j<=n;j++)
	{
		if(book[j]==0&&e[cur][j]!=666666)
		{
			book[j]=1;
			dfs(j,dis+e[cur][j]);
			book[j]=0;
		}
	}
	return;
}
main()
{
	int i,j,m,a,b,c;
	scanf("%d %d",&n,&m);//five cities,eight rounts;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)e[i][j]=0;
			else e[i][j]=666666;
		}
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		e[a][b]=c;
	}
	book[1]=1;
	dfs(1,0);
	printf("%d",min);
}
