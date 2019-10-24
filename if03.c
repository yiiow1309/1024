//점수를 입력 받아 등급을 출력하는 프로그램을 작성하시오.

#include<stdio.h>
int main()
{
	int score;
	
	printf("점수 입력:");
	scanf("%d",&score);
	
	if(score>=90)
	{
          printf("당신의 학점은 4.0이고 등급은 A입니다\n");
    } 
    else
    {
    	 if(score>=80)
    	 {
    	 	printf("당신의 학점은 3.0이고 등급은 B입니다\n");
		 }
		 else
		 {
		 	if(score>=70)
		 	{
		 		printf("당신의 학점은 2.0이고 등급은 C입니다\n");
		    }
		    else
		    {
		    	if(score>=60)
		    	{
		    		printf("당신의 학점은 1.0이고 등급은 D입니다\n");
				}
				else
				{
					printf("당신의 학점은 0이고 등급은 F입니다\n");
				}
			}
		 }
	}
} 
