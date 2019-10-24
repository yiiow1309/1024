#include<stdio.h>
int main()
{
	int year,month,days;
	
	printf("년도 입력:");
	scanf("%d",&year);
	printf("월 입력:");
	scanf("%d",&month);
	
	switch(month)
	{
		case 2:
			if(year % 4 ==0 && year % 100 !=0 || year % 400 ==0)
			  days = 29;
			else
			  days = 28;
			break;
		case4:
		case6:
		case9:
		case11:
		    days = 30;
		    break;
		default:
		    days = 31;
			break;
						
	}
	
	printf("%d",days);
}
