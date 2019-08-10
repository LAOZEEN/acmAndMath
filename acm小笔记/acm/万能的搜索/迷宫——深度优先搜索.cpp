#include<stdio.h>
int n,m,p,q,min=99999999;
int a[51][51],book[51][51];
void dfs(int x,int y,int step)
{
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	int tx,ty,k;
	if(x==p&&y==q)
	{
		if(step<min)
			min=step;
		return;
	}
	for(k=0;k<=3;k++)
	{
		ty=y+next[k][1];
		tx=x+next[k][0];
		printf("(%d,%d)\n",tx,ty);
		if(tx<1||tx>n||ty<1||ty>m) continue;
		if(a[tx][ty]==0&&book[tx][ty]==0)
		{
			book[tx][ty]=1;
			dfs(tx,ty,step+1);
			book[tx][ty]=0;
		}
	}
	return;
}
main()
{
	int i,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&p,&q);
	book[1][1]=1;
	dfs(1,1,0);
	printf("%d",min);
}
