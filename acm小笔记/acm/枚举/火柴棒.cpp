#include<stdio.h>
int fun (int a[],int n)
{
	int sum=0;
	while(n/10!=0)
	{
		sum=sum+a[n%10];
		n=n/10;
	}
	sum=sum+a[n];
	return sum;
 }
 
 main()
 {
 	int arr[10]={6,2,5,5,4,5,6,3,7,6};
 	int sum=0,a,b,m=20,c;
 	for(a=0;a<=11111;a++)
 	 for(b=0;b<=11111;b++)
 	 {
 	  	c=a+b;
 	  	if(fun(arr,c)+fun(arr,a)+fun(arr,b)==m)
 	  	{
 	  		printf("%d+%d=%d\n",a,b,c);
 	  		sum++;
		}
	 }
	   printf("all is %d",sum);
  } 
