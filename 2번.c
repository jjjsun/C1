#include <stdio.h>

int is_leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("%d�� �����Դϴ�.\n", year);
	}
	else {
		printf("%d�� ������ �ƴմϴ�.\n", year);
	}
}
int main(void)
{
	int i = 1;
	while (i <= 3)
	{
		printf("�⵵�� �Է��Ͻÿ�:");
		scanf_s("%d", &year);
		is_leap(year);
		i++;
	}
}