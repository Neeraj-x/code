#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *f1,*f2;
	int i,n,num;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("\nEnter the numbers\n:");
	f1=fopen("EVEN","wb");
	f2=fopen("ODD","wb");
	if(f1==NULL||f2==NULL){
		printf("ERROR!");
		getchar();
		exit(1);
	}
	for(i=0;i<n;i++){
		scanf("%d",&num);
		if(num%2==0) putw(num,f1);
		else putw(num,f2);
			
	}
	fclose(f1);
	fclose(f2);
	
	printf("\nEVEN NUMBERS\n");
	f1=fopen("EVEN","rb");
	if(f1==NULL){
		printf("ERROR!");
		getchar();
		exit(1);
	}
	while(1)
	{
		num=getw(f1);
		if(feof(f1)) break;
		printf("\n%d",num);
		
	}
	printf("\nODD NUMBERS\n");
	f2=fopen("ODD","rb");
	if(f2==NULL){
		printf("ERROR!");
		exit(1);
	}
	while(1)
	{
		num=getw(f2);
		if(feof(f2)) break;
		printf("\n%d",num);
	}
	fclose(f1);
	fclose(f2);

}

	
