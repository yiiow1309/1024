//������ �Է� �޾� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include<stdio.h>
int main()
{
	int score;
	
	printf("���� �Է�:");
	scanf("%d",&score);
	
	if(score>=90)
	{
          printf("����� ������ 4.0�̰� ����� A�Դϴ�\n");
    } 
    else
    {
    	 if(score>=80)
    	 {
    	 	printf("����� ������ 3.0�̰� ����� B�Դϴ�\n");
		 }
		 else
		 {
		 	if(score>=70)
		 	{
		 		printf("����� ������ 2.0�̰� ����� C�Դϴ�\n");
		    }
		    else
		    {
		    	if(score>=60)
		    	{
		    		printf("����� ������ 1.0�̰� ����� D�Դϴ�\n");
				}
				else
				{
					printf("����� ������ 0�̰� ����� F�Դϴ�\n");
				}
			}
		 }
	}
} 
