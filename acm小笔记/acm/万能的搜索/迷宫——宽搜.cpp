#include<stdio.h>
struct note
{
	int x;int y;int s;
};
main()
{
	struct note que[2501];
	int a[51][51]={0},book[51][51]={0};
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	int head,tail,i,j,k,n,m,p,q,tx,ty,flag;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&p,&q);
	head=tail=1;
	que[tail].x=que[tail].y=1;
	tail++;
	book[1][1]=1;
	flag=0;
	while(head<tail)
	{
		for(k=0;k<=3;k++)
		{
			
			tx=que[head].x+next[k][0];
			ty=que[head].y+next[k][1];
			if(tx<1||ty<1||tx>n||ty>m)continue;
			if(a[tx][ty]==0&&book[tx][ty]==0)
			{
				book[tx][ty]=1;
				que[tail].x=tx;
				que[tail].y=ty;
				que[tail].s=que[head].s+1;
				tail++;
				printf("(%d,%d)\n",tx,ty); 
			}
			if(tx==p&&ty==q)
			{flag=1;break;
			}
		}
		if(flag==1)break;
		head++;
			printf("%d %d\n",head,tail);
	}
	printf("%d\n",que[head].s);
}
