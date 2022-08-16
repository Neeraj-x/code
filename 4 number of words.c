#include<stdio.h>
int main(){
	char a[100];
	int c=1;
	
	printf("Enter the string:");
	gets(a);
	for(int i=0;a[i]!='\0';i++){
	if(a[i]=='\t'||a[i]==' '||a[i]=='\t') c++;
	}
	printf("Total Number Of  Words: %d",c);
}
