#include<stdio.h>
#include<string.h>
int main(){
	char str[20],abb[20];
	int i=0;
	gets(str);
	strupr(str);
	printf("%c",str[0]);
	while(str[i]){
		if(str[i] == ' '){
			printf("%c",str[i+1]);
		}
		i++;
	}
}
