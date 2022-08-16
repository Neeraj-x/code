#include<stdio.h>
int main(){
	int n,d,s,r=0;
	printf("Enter a NUmber:");
	scanf("%d",&n);
	s=0;
	while(n!=0){
		d=n%10;
		s+=d;
		r=r*10+d;
		n=n/10;
	}
	printf("Sum of digits =%d",s);
	printf("\n Reverse =%d",r);
	
}
