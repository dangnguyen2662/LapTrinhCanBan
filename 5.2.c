#include	<stdio.h>
#define MAX 100

void NhapMang(int a[][MAX], int dong, int cot);
void XuatMang(int a[][MAX], int dong, int cot);
void DongBangCot(int a[][MAX], int dong, int cot);
void KTTangDan(int a[][MAX], int dong, int cot);
void TongCacDong(int a[][MAX], int dong, int cot);
int DemSoDuong(int a[][MAX], int cot, int n);
int TimMin(int a[][MAX], int dong, int cot);
void HoanVi(int *a, int *b);
void HoanViCot(int a[][MAX], int dong, int cot1, int cot2);
void SapXepTang(int a[][MAX], int dong, int cot);

int main()
{
	int a[MAX][MAX], dong, cot;
	printf("\nNhap so dong: ");
	scanf("%d", &dong);
	printf("\nNhap so cot: ");
	scanf("%d", &cot);
	//nhap
	NhapMang(a, dong, cot);
	//xuat
	printf("\nMang vua nhap la: \n");
	XuatMang(a, dong, cot);
	//liet ke dong bang cot
	printf("\nCac phan tu o vi tri dong = cot la: ");
	DongBangCot(a, dong, cot);
	//ktra tang dan
	KTTangDan(a, dong, cot);
	//tong dong
	TongCacDong(a, dong, cot);
	//tinh so luong so nguyen duong
	printf("\nNhap dong can dem so luong so nguyen duong: ");
	int n;
	scanf("%d", &n);
	printf("\nSo luong so nguyen duong tren dong %d la: %d", n, DemSoDuong(a, cot, n-1));
	//tim min
	printf("\nGia tri phan tu nho nhat trong mang la: %d", TimMin(a, dong, cot));
	//hoan vi 2 cot
	int cot1, cot2;
	printf("\nNhap 2 cot can hoan vi: \n");
	printf("Cot 1: ");
	scanf("%d", &cot1);
	printf("Cot 2: ");
	scanf("%d", &cot2);
	HoanViCot(a, dong, cot1-1, cot2-1);
	printf("\nMang sau khi hoan vi la: \n");
	XuatMang(a, dong, cot);
	//sap xep tang
	SapXepTang(a, dong, cot);
	printf("\nMang sau khi sap xep la: \n");
	XuatMang(a, dong, cot);
	return 0;
}


void NhapMang(int a[][MAX], int dong, int cot)
{
	int i, j;
	for (i = 0; i < dong; i++)
		for(j = 0; j< cot; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
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

void DongBangCot(int a[][MAX], int dong, int cot)
{
	int i, j;
	if(dong-cot<0)
		for(i=0; i<dong; i++)
			printf("%5d", a[i][i]);	
	else 
		for(i=0; i<cot; i++)
			printf("%5d", a[i][i]);	
}

void KTTangDan(int a[][MAX], int dong, int cot)
{
	int i, j, dem[MAX]={};
	for(i=0; i<dong; i++)
	{
		for(j=0; j<cot-1; j++)
			if(a[i][j]>a[i][j+1])
				dem[i]++;
		if(dem[i]==0)
			printf("\nDong thu %d tang dan", i+1);
		else
			printf("\nDong thu %d khong tang dan", i+1);
	}
}

void TongCacDong(int a[][MAX], int dong, int cot)
{
	int i, j, sum[MAX]={};
	for(i=0; i<dong; i++)
	{
		for(j=0; j<cot; j++)
			sum[i]+=a[i][j];
		printf("\nTong dong %d = %d", i+1, sum[i]);	
	}
}

int DemSoDuong(int a[][MAX], int cot, int n)
{
	int i, dem = 0;
	for(i=0; i<cot; i++)
		if(a[n][i]>0)
			dem++;
	return dem;
}

int TimMin(int a[][MAX], int dong, int cot)
{
	int i, j, min=a[0][0];
	for(i=0; i<dong; i++)
		for(j=0; j<cot; j++)
			if(a[i][j]<min)
				min = a[i][j];
	return min;
}

void HoanViCot(int a[][MAX], int dong, int cot1, int cot2)
{
	int i;
	for(i=0; i<dong; i++)
		HoanVi(&a[i][cot1], &a[i][cot2]);
}

void HoanVi(int *a, int *b)
{
	int temp = *a;
	*a=*b;
	*b=temp;
}

void SapXepTang(int a[][MAX], int dong, int cot)
{
	int i, j, k;
	for(i=0; i<dong; i++)
	{
		for(j=0; j<cot-1; j++)
		{
			for(k=j+1; k<cot; k++)
				if(a[i][j]>a[i][k])
					HoanVi(&a[i][j], &a[i][k]);
		}
	}
}

//  THE END !!! PERFECTION
