#include <stdio.h>

char charc;
int i = 0;
int check_alpha(charc)
{
	if ((charc >= 'a' && charc <= 'z') || (charc >= 'A' && charc <= 'Z')){
		printf("%c�� ���ĺ��Դϴ�.\n",charc);
	}
	else {
		printf("%c�� ���ĺ��� �ƴմϴ�.\n",charc);
	}
}
int main()
{
	while (i <= 2)
	{
		printf("���ĺ��� �Է��Ͻÿ�:");
		scanf_s("%c", &charc);
		check_alpha(charc);
		i++;
		getchar();
	}
		

}
