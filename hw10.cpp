#include<stdio.h>
#include<stdlib.h>
int main()
{
	char n,o;
	
	printf("請輸入您要轉換字母:");
	scanf("%c",&n);
	if(n>=41&&n<=90)
	{
	o=n+32;
	}
	if(n>=97&&n<=122)
	o=n-32;
	
	printf("%c",o);
	
    return 0;
    
 } 
