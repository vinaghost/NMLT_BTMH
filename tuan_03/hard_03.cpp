#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>



//VINAGHOST_18CTT2_FIT_HCMUS
//1 - 9 - 2018
//Please don't copy my code without permission

//Nhap 1 so phan tich thanh 10, 5, 2 va 1

int main()
{
	int N;

	printf("Nhap so tien: ");
	scanf("%d", &N);


	printf("N = %d dong = ", N);
	printf("%d to 10d + ", N / 10); // 10
	N = N % 10;
	printf("%d to 5d + ", N / 5); // 5
	N = N % 5;
	printf("%d to 2d + ", N / 2); // 2
	N = N % 2;
	printf("%d to 1d", N); // 5

	_getch();
	return 0;
}