#include<stdio.h>
int main()
{
	int num,i,hap=0;
	
	printf("���� ���� �Է�:");
	scanf("%d",&num);
	
	i = num;
	do{
		hap += i;
		i--;		
	}
	while(i > 0);
	
	printf("1���� %d������ �� = %d�Դϴ�\n",num,hap);
	
	return 0;
}
