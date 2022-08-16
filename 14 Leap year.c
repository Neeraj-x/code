#include<stdio.h>
int main()
{
	int year;
	printf("\n Enter year:\n");
	scanf("%d",&year);
	if(year%4==0||year%400==0&&year%100!=0){
		printf("The %d year is leap year",year);
	}
	else printf("The year %d is not a leap year",year);
	
}
