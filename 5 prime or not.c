#include<stdio.h>
int main(){
	int num,i,ctr=0,flag=0;
	printf("Input a number:");
	scanf("%d",&num);
	for (i=2;i<num/2;i++){
		if (num%i==0){
			flag=1;
			break;
		}
	}
	if (num==1){
		printf("1 is neither prime nor composite:");
	}
	else if(flag==1){
		printf("%d is prime number",num);
	}
	else
			printf("%d is not a prime number\n",num);
}
