#include<stdio.h>
int book[13]={0},table[13]={0};
void dfs(int step)
{
	void judge();
	if(step==1||step==10||step==12)
	{
		dfs(step+1);
		return;
	}
	if(step==13)
	{
		judge();
	}
	int i;
	for(i=1;i<=12;i++)
	{
		if(book[i]!=1)
		{
			book[i]=1;
			table[step]=i;
			dfs(step+1);
			book[i]=0;
		}
	}
  }  
int judge()
  {
  	int i,b[7];
  	b[1]=table[1]+table[2]+table[3]+table[4];
  	b[2]=table[4]+table[5]+table[6]+table[7];
  	b[3]=table[1]+table[8]+table[9]+table[7];
  	b[4]=table[10]+table[9]+table[2]+table[11];
  	b[5]=table[10]+table[12]+table[3]+table[5];
  	b[6]=table[11]+table[8]+table[6]+table[12];
  	for(i=1;i<=5;i++)
  	{
  		if(b[i]!=b[i+1])return;
	  }
  }
  main()
  {
  	table[1]=1;book[1]=1;
  	table[10]=8;book[8]=1;
  	table[12]=3;book[3]=1;
  	dfs(1);
  	for(int i=1;i<=12;i++)
  	 printf("%d\n",table[i]);
  }
