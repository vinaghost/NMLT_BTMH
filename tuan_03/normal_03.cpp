#include <stdio.h>
#include <conio.h>


//VINAGHOST_18CTT2_FIT_KHTN
//31 - 8 - 2018
//Please don't copy/paste my code without permission
int main()
{
	char n;
	int m;

	printf("\nNhap ki tu can phien dich: ");
	scanf("%c", &n);

	printf("\nKi tu %c co ma trong bang ma ASCII la %d", n, n);

	printf("\nNhap so can phien dich: ");
	scanf("%d", &m);
	printf("\nSo %d la ki tu %c trong ma ASCII", m, m);


	_getch();
	return 0;
}