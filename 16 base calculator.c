#include<stdio.h>
#include<conio.h>
int main(){
	int x[10],n,b,i=1,m;
	static char ch[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	printf("Enter a Decimal Number: ");
	scanf("%d",&n);
	printf("Enter a base: ");
	scanf("%d",&b);
	m=n;
	if (n==0){
		printf("%d in base %d is 0\n",m,b);
	}else{		
	while(n>0){
		x[i]=n%b;
		n = n/b;
		i++;
	}
	printf("%d in base %d is \n",m,b);
	for (i--;i>=1;i--){
		printf("%c",ch[x[i]]);
	}
	}
}
