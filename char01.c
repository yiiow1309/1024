#include<stdio.h>
int main()
{
	char ch;
	
	printf("�빮���Է�");
	scanf("%c",&ch);
	
	//�빮��'A' ASCII code �� 65
	//�ҹ���'a' ASCII code �� 97     �� ������ gap�� 32
	printf("%c�� �ҹ��ڴ� %c�Դϴ�.",ch,ch+32); 
	
	return 0;
}
