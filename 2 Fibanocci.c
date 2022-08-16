#include<stdio.h>
int main(){
	
	int a,b,c,i,n;
	printf("ENTER THE LIMIT:");
	scanf("%d",&n);
	printf("\n The first %d fibanocci nums are",n);
	for(a=1,b=0,i=0;i<n;i++){
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
}
