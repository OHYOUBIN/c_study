#include<stdio.h>
int main(void)
{
	char q;
	printf("문자를입력해주세요.");
	scanf_s("%c", &q);
	q = q-32;
	printf("%c", q);
}