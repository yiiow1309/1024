#include<stdio.h>
int main()
{
	char ch;
	
	printf("알파벳 입력");
	scanf("%c",&ch);
	
	if(ch>=97 && ch<=122)
	{
  	     ch-=32;
    }
	printf("당신이 입력한문자의 대문자는 %c입니다",ch);	
	
	
	
	
	 
}

