#include<stdio.h>
int main(void)
{
	char q;
	printf("���ڸ� �Է��ϼ���:");
	scanf_s("%c", &q);
	if (q == 'a')
	{
		q = q - 32;
	}
	if (q == 'e')
	{
		q = q - 32;
	}
	printf("%c", q);
}