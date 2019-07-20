#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],i,c[100][100],j,k,m,n,p,q;
	printf("enter the rows and columns of 1st matrix:");
	scanf("%d %d",&m,&n);
	
	printf("enter the rows and columns of 2nd matrix:");
	scanf("%d %d",&p,&q);
	
	if(n!=p)
	printf("error!");
	
	printf("enter the 1st matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		
	scanf("%d",&a[i][j]);
		}
	printf("\n");
	}
	printf("enter the 2nd matrix:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		
	scanf("%d",&b[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		
	c[i][j]=0;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
	for(k=0;k<p;k++)
	{
	c[i][j]+=a[i][k]*b[k][j];
	}	
	
		}
	printf("\n");	
	}


	for(i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
		{
		
	printf("%d  ",c[i][j]);
		}
		printf("\n");
	}




}





















