#include<stdio.h>
int main(void)
{
	char q;
	printf("문자를 입력하세요:");
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