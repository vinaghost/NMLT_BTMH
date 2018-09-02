#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

using namespace std;

//VINAGHOST_18CTT2_FIT_HCMUS
//1 - 9 - 2018
//Please don't copy my code without permission

//Nhap gio - phut - giay va kiem tra tinh hop le

int main()
{
	int h, m, s;

	printf("Nhap gio: ");
	scanf("%d", &h);

	printf("Nhap phut: ");
	scanf("%d", &m);

	printf("Nhap giay: ");
	scanf("%d", &s);

	if ((h > 0) && (m > 0 && m < 60) && (s > 0 && s < 60))
	{
		printf("Hop le");
	}
	else
		printf("khong hop le");

	_getch();
	return 0;
}