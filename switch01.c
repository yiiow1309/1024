#include<stdio.h>
int main()
{
	char ch;
	
	printf("(a,b,c)�߿� �ϳ��� �Է�");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
			printf("a�� �Է��߽��ϴ�\n");
			printf("����� �г����� apple�Դϴ�\n");
			break;
		case 'b':
			printf("a�� �Է��߽��ϴ�\n");
			printf("����� �г����� banana�Դϴ�\n");
			break;
		case 'c':
			printf("a�� �Է��߽��ϴ�\n");
			printf("����� �г����� cherry�Դϴ�\n");
			break;
		default:
			printf("a,b,c�� �ϳ��Է�");
			break; 
	}
	return 0;
	
}
