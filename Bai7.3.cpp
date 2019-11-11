#include	<stdio.h>
#include	<math.h>

struct Diem
{
	float x;
	float y;
};

void NhapDiem(struct Diem &a)
{
	printf("\n Nhap tung do x = ");
	scanf("%f", &a.x);
	printf("\n Nhap hoanh do y = ");
	scanf("%f", &a.y);
}

void XuatDiem(struct Diem a)
{
	printf(" ( %.2f ; %.2f )", a.x, a.y);
}

float KhoangCach2Diem(struct Diem a, struct Diem b)
{
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int DiemTrenOx(struct Diem a)
{
	if(a.y==0)
		return 1;
	return 0;
}

int DiemTrenO(struct Diem a)
{
	if(a.y==0 && a.x == 0)
		return 1;
	return 0;
}

int main()
{
	printf("\n -----He Toa Do Decast Oxy-----");
	struct Diem diem1, diem2;
	
	printf("\n Nhap diem thu nhat:");
	NhapDiem(diem1);
	printf("\n Nhap diem thu hai:");
	NhapDiem(diem2);
	
	printf("\n hai diem vua nhap la: ");
	XuatDiem(diem1);
	XuatDiem(diem2);
	
	printf("\n Khoang cach giua 2 diem vua nhap la: %.2f", KhoangCach2Diem(diem1, diem2));
	
	if(DiemTrenOx(diem1))
		printf("\n Diem thu nhat nam tren truc hoanh !!!");
	else
		printf("\n Diem thu nhat khong nam tren truc hoanh !!!");
	
	if(DiemTrenOx(diem2))
		printf("\n Diem thu hai nam tren truc hoanh !!!");
	else
		printf("\n Diem thu hai khong nam tren truc hoanh !!!");
		
	if(DiemTrenO(diem1))
		printf("\n Diem thu nhat trung voi goc toa do !!!");
	else
		printf("\n Diem thu nhat khong trung voi goc toa do !!!");
	return 0;
}
