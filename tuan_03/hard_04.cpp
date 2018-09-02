#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

using namespace std;

//VINAGHOST_18CTT2_FIT_HCMUS
//1 - 9 - 2018
//Please don't copy my code without permission

//Nhap 1 so 3 chu so va tinh tong 3 chu so do

int main()
{
	int N, a, b, c;

	printf("Nhap so co 3 chu so: ");
	scanf("%d", &N);

	printf("So %d co tong 3 chu so la: ", N);
	a = N / 100;
	N = N % 100;
	b = N / 10;
	c = N % 10;
	
	
	printf("%d + %d + %d = ", a, b, c);
	printf("%d", a + b + c); 

	_getch();
	return 0;
}