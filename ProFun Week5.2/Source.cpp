#include<stdio.h>
int main()
{
	float money;
	scanf_s("%f", &money);
	if (money > 0) printf("%g", money * 32.5);
	else printf("You don't have money");



	return 0;
}