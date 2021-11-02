#include<stdio.h>
int main(void)
{
	char q;
	printf("문자를 입력하세요:");
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