#include <stdio.h>
#include <conio.h>

using namespace std;

//VINAGHOST_18CTT2_FIT_HCMUS
//1 - 9 - 2018
//Please don't copy my code without permission

//Nhap 2 so va xuat min, max khong dung cau truc dieu khien
int main()
{
	int a, b;

	printf("Nhap so dau tien: ");
	scanf("%d", &a);
	printf("\nNhap so thu hai: ");
	scanf("%d", &b);
	

	printf("\n\nSo lon nhat trong 2 so tren la: %d", (a*(a > b) + b * !(a > b)));
	printf("\nSo nho nhat trong 2 so tren la: %d", (a*(a < b) + b * !(a < b)));


	_getch();
	return 0;
}