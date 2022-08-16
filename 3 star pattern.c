#include<stdio.h>
int main(){
	int n;
	printf("Enter no times the pattern should be printed: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int k=i;k<n-1;k++){
			printf(" ");
		}
		for(int j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
