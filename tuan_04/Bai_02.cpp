#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

//VINAGHOST_18CTT2_FIT_HCMUS
//2 - 9 - 2018
//Please don't copy my code without permission

//Nhap a b c d
// in so lon nhat va be nhat
// in so khong lon va khong be
void hoan_doi(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
int main()
{
	int a, b, c, d;
	int agree;

START:printf("Nhap 4 so cach nhau dau khoang trang: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a > b) hoan_doi(a, b);
	if (a > c) hoan_doi(a, c);
	if (a > d) hoan_doi(a, d);
	if (b > c) hoan_doi(b, c);
	if (b > d) hoan_doi(b, d);
	if (c > d) hoan_doi(c, d);

	printf("So lon nhat la: %d", d);
	printf("So nho nhat la: %d", a);
	printf("Hai so con lai la: %d va %d", b, c);


	printf("\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap 2 so khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;
}