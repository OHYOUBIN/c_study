#include<stdio.h>
int main(void)
{
	char q;
	printf("���ڸ� �Է��ϼ���:");
	scanf_s("%c", &q);
	if (q >= 'a' && q <= 'z')
	{
		q = q - 32;
	}
	else if (q >= 'A' && q <= 'Z')
	{
		q = q + 32;
	}
	printf("%c", q);
}