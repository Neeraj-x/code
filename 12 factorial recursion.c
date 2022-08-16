#include<stdio.h>

long factorial(int n);
int main(){
	int x;
	printf("Enter num:");
	scanf("%d",&x);
	printf("factorial of enterd number:%d",factorial(x));
	
}
	
	long factorial(int n){
		if (n==0)
			return 1;
		else
			return (n*factorial(n-1));
	}
