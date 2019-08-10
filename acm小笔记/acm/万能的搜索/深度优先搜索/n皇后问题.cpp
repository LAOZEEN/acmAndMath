# include <stdio.h>  
# include <stdlib.h>  
# include <math.h>  
  
int count = 0,n;  
int  *table,*book;  
  
void dfs(int step);  
void judge(void);  
  
int main(void)  
{  
    int i;  
    scanf("%d",&n);   //输入n值 
    table = (int *)malloc(sizeof(int)*(n+1));  
    book = (int *)malloc(sizeof(int)*(n+1));  
      
    for(i=0;i<=n;i++)  
        book[i] = 0;   
          
    dfs(1);  
    printf("%d ",count);  
    return 0;  
}   
void dfs(int step)  
{  
    int i;  
    if(step>n)  
        judge();  
    for(i=1;i<=n;i++)   
        if(book[i]==0)  
        {  
            book[i] = 1;  
            table[step] = i;  
            dfs(step+1);  
            book[i] = 0;  
        }      
}    
void judge(void)  
{  
    int i,j;   
    for(i=1;i<=n;i++)    
        for(j=1;j<i;j++)   
            if(abs(j-i)==abs(table[j]-table[i]))  //表示斜率为1或者-1，则在斜线方向 
                return ;    
    count++;  
}
