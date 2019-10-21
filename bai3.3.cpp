#include	<stdio.h>

int main()
{
	printf("\nNhap ban kinh hinh tron: r = ");
	int r;
	scanf("%d", &r);
	
	printf("\nChu vi cua hinh tron la: %.2f", 3.14*2*r);
	printf("\nDien tich cua hinh tron la: %.2f", 3.14*r*r);
	return 0;
	
}
