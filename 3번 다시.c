#include <stdio.h>


int dis;
int get_distance(int x1, int y1, int x2, int y2) {
	if (x1 >= x2) {
		if (y1 >= y2) {
			dis = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) * 1 / 2;
			printf("�� �� ������ �Ÿ��� %d�Դϴ�.\n", dis);
		}
		else {
			dis = ((x1 - x2) * (x1 - x2) + (y2 - y1) * (y2 - y1)) * 1 / 2;
			printf("�� �� ������ �Ÿ��� %d�Դϴ�.\n", dis);
		}
	}
	else {
		if (y1 >= y2) {
			dis = ((x2 - x1) * (x2 - x1) + (y1 - y2) * (y1 - y2)) * 1 / 2;
			printf("�� �� ������ �Ÿ��� %d�Դϴ�.\n", dis);
		}
		else {
			dis = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) * 1 / 2;
			printf("�� �� ������ �Ÿ��� %d�Դϴ�.\n", dis);
		}
	}


int main()
{
	printf("x1,x2,y1,y2�� ������� �Է��Ͻÿ�");
	scanf_s("%d %d %d %d", &x1, &x2, &y1, &y2);
	get_distance(int x1, int y1, int x2, int y2);
}