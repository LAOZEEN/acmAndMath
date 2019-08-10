#include<stdio.h>
struct q
{
	int x;
	int y;
};
main()
{
	int head=1;int tail=1;
	int flag=0;
	q que[2501];
	int tx,ty;
	int step[4][2]={{0,1},{-1,0},{1,0},{0,-1}};
	int book[51][51]={0};
	book[6][8]=1;int sum=1;
	que[1].x=6;que[1].y=8;tail++;
	int a[51][51];
	int m,n;//¶à¿í¶à³¤;
	printf("please enter the m,n?\n");
	scanf("%d %d",&m,&n);
	int i,j,k;
	for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	 while(head<tail)
	 {
	 	for(k=0;k<=3;k++)
	 	{
	 		tx=step[k][0]+que[head].x;
	 		ty=step[k][1]+que[head].y;
	 		if(ty<1||ty>n||tx<1||tx>m) continue;
	 		if(book[tx][ty]==0&&a[tx][ty]>0)
	 		{
	 			book[tx][ty]=1;
	 			sum++;
	 			que[tail].x=tx;
	 			que[tail].y=ty;
	 			tail++;
			 }
		 }
		 head++;
	 }
	 printf("%d",sum);
}
