#include<stdio.h>
int main()
{
	int money = 0;
	int total = money;
	int empty = money;
	scanf("%d", &money);

	while (empty > 2)
	{
		total = total + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", total);
}