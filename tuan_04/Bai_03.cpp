#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

//VINAGHOST_18CTT2_FIT_HCMUS
//12 - 9 - 2018
//Please don't copy my code without permission

//Tinh tien taxi
// km 1 = 15 000
// km 2 - 5  = 13 500
// km 6 - ... = 11 000
// > 120 km : giam 10 %

#define KM1 15000
#define KM2_5 13500
#define KM6_ 11000
#define DISCOUNT 10
int main()
{
	int km, tien;
	int i;
	int agree;

START:printf("Nhap so km da di duoc: ");
	scanf("%d", &km);

	if (km < 2)
		tien = KM1;
	else if (km < 6)
	{
		tien = KM1;
		for (i = 1; i < km; i++)
			tien += KM2_5;
	}
	else
	{
		tien = KM1 + 4 * KM2_5;
		for (i = 5; i < km; i++)
			tien += KM6_;
	}
	if (km > 120)
		tien -= tien / 100 * DISCOUNT;

	printf("So tien la: %d", tien);

	printf("\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap so km khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}
	return 0;
}