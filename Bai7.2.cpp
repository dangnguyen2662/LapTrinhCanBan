#include	<stdio.h>
#include	<math.h>
struct Elip
{
	float x;
	float y;
	float r1;
	float r2;
};

//ham nhap elip
void NhapElip(struct Elip &a)
{
	printf("\n Nhap toa do tam: \n x = ");
	scanf("%f", &a.x);
	printf(" y = ");
	scanf("%f", &a.y);
	printf("\n Nhap ban kinh nho: ");
	scanf("%f", &a.r1);
	printf("\n Nhap ban kinh lon: ");
	scanf("%f", &a.r2);	
}

//ham tinh chu vi elip
float ChuViElip(float r1, float r2)
{
	return 2*3.14*sqrt((r1*r1+r2*r2)/2);
}

//ham tinh dien tich elip
float DienTichElip(float r1, float r2)
{
	return 3.14*r1*r2;
}

void XuatElip(struct Elip a)
{
	printf("\n Thong tin elip: ");
	printf("\n Toa do tam elip la: ( %.2f ; %.2f )", a.x, a.y);
	printf("\n Ban kinh nho: %.2f", a.r1);
	printf("\n Ban kinh lon: %.2f", a.r2);
}

int KiemTraTamElip(float x, float y )
{
	if(x == 0 && y == 0)
		return 1;
	return -1;
}

int main()
{
	struct Elip a;
	NhapElip(a);
	
	printf("\n Chu vi cua elip vua nhap la: %.2f",ChuViElip(a.r1, a.r2));
	
	printf("\n Dien tich cua elip vua nhap la: %.2f",DienTichElip(a.r1, a.r2));
	
	XuatElip(a);
	
	if(KiemTraTamElip(a.x, a.y) == 1)
		printf("\n Elip co tam trung voi goc toa do !!!");
	else
		printf("\n Elip co tam khong trung voi goc toa do !!!");
		
	return 0;
}
