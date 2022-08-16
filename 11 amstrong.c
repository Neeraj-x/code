#include<stdio.h>

int main(){
	int j,u,i,s,m,d;
	printf("ENter the Range:");
	scanf("%d%d",&j,&u);
	printf("Amstrong Numbers in the range: %d t0 %d",j,u);
	for (i=1;i<=u;i++){
		s=0;
		m=i;
		while(m>0){
			d=m%10;
			s=s+d*d*d;
			m=m/10;
		}
		if (i==s){
			printf("\n%d ",i);
		}
	}
}
