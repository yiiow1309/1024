#include<stdio.h>
int main()
{
	int age,money=10000;
	
	printf("����� ���̸� �Է��ϼ���");
	scanf("%d",&age);
	
	if(age <19 || age >=60)
	{
		money -=5000;
    } 
	
	
	printf("����� ������ �ݾ��� %d���Դϴ�\n",money);
	
	return 0;
}
