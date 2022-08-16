/*fill upper triangle*/
#include<stdio.h>
int main()
{
	
	int a[10][10],i,j,n,m;
	printf("Enter the order:");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i<j)
		{
			a[i][j]=1;
		}
		else if(i>j)
		{
			a[i][j]=-1;
		}
		else{
			a[i][j]=0;
		}
		}
	}
		printf("\n The matrix is\n");
		for(i=0;i<m;i++){
			//printf("\n");
			for(j=0;j<n;j++)
			printf(" %d",a[i][j]);
		printf("\n");
		}
		}

