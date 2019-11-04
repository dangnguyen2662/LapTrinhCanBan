#include	<stdio.h>
#define MAX 100
void NhapMang(int a[][MAX], int dong, int cot);
void XuatMang(int a[][MAX], int dong, int cot);

int main()
{
	int a[MAX][MAX], na, ma, b[MAX][MAX], nb, mb;
	//nhap
	printf("\nNhap so dong mang A: ");
	scanf("%d", &na);
	printf("\nNhap so cot mang A: ");
	scanf("%d", &ma);
	printf("\nNhap mang A: \n");
	NhapMang(a, na, ma);
	printf("\nNhap so dong mang B: ");
	scanf("%d", &nb);
	printf("\nNhap so cot mang B: ");
	scanf("%d", &mb);
	printf("\nNhap mang B: \n");
	NhapMang(b, nb, mb);
	//xuat
	printf("\nMang A: \n");
	XuatMang(a, na, ma);
	printf("\nMang B: \n");
	XuatMang(b, nb, mb);
	//nhung pt xuat hien 1 lan
	printf("\nNhung phan tu chi xuat hien 1 lan trong mang A: \n");
	
	return 0;
}

void NhapMang(int a[][MAX], int dong, int cot)
{
	int i, j;
	for (i = 0; i < dong; i++)
		for(j = 0; j< cot; j++)
		{
			printf("Nhap pt[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
}
void XuatMang(int a[][MAX], int dong, int cot)
{
	int i, j;
	for (i = 0; i < dong; i++)
	{
		for(j=0; j<cot; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

void XuatHien1Lan(int a[][MAX], int dong int cot)
{
	
}







