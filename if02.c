//������ ��쿡�� "����� �����Դϴ�." "����� = 15000�� �Դϴ�." ����
//�̼����� ��쿡�� "����� �̼������Դϴ�.""�����=9000���Դϴ�."���

#include<stdio.h>
int main()
{
	
	int age,money;
	
	printf("����� ���̸� �Է��ϼ���:");
	scanf("%d",&age);
	
	if(age>=19)
	{
		money = 15000;
		printf("����� �����Դϴ�\n");
	    printf("����� = %d�� �Դϴ�/n",money); 
	}
	else
	{
		money = 9000;
	    printf("����� �̼����� �Դϴ�\n");
	    printf("����� = %d�� �Դϴ�/n",money);
	}
    return 0;
}
