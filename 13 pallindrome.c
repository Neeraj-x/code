//Programm for check given string pallindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],temp[20];
	printf("Enter the string:");
	gets(str1);
	strcpy(temp,str1);
    strrev(str1);
	if (strcmp(temp,str1))
	printf("Entered String %s is not pallindrome",temp);
	else 
	printf("Entered String %s is pallindrome",temp);
}

