#include	<stdio.h>
#include	<math.h>

// Dinh nghia struc PHAN_SO
struct PHAN_SO
{
	int tuSo;
	int mauSo;
};

// Ham nhap PHAN_SO
void NhapPhanSo(struct PHAN_SO &ps)
{
	printf("\n Nhap tu so: ");
	scanf("%d", &ps.tuSo);
	printf("\n Nhap mau so: ");
	scanf("%d", &ps.mauSo);
	while(ps.mauSo == 0)
	{
		printf("\n Vui long nhap mau so khac 0.");
		printf("\n Nhap lai mau so: ");
		scanf("%d", &ps.mauSo);
	}
}

void XuatPhanSo(struct PHAN_SO ps)
{
	printf("%d/%d", ps.tuSo, ps.mauSo);
}

void ChuanHoaPhanSo(struct PHAN_SO &ps)
{
	if(ps.mauSo < 0)
	{
		ps.tuSo = ps.tuSo * (-1);
		ps.mauSo = ps.mauSo * (-1);
	}
}
int UocChungLonNhat(int a, int b)
{
	for(int i = abs(a); i > 0; i--)
		if(a%i==0 && b%i==0)
			return i;
	return 1;
}

void RutGonPhanSo(struct PHAN_SO &ps)
{
	int ucln = UocChungLonNhat(ps.tuSo, ps.mauSo);
	ps.tuSo = ps.tuSo/ucln;
	ps.mauSo = ps.mauSo/ucln;
}

struct PHAN_SO TongHaiPhanSo(struct PHAN_SO ps1, struct PHAN_SO ps2)
{
	struct PHAN_SO psTong;
	psTong.tuSo = ps1.tuSo*ps2.mauSo + ps2.tuSo*ps1.mauSo;
	psTong.mauSo = ps1.mauSo*ps2.mauSo;
	
	return psTong;
}

struct PHAN_SO HieuHaiPhanSo(struct PHAN_SO ps1, struct PHAN_SO ps2)
{
	struct PHAN_SO psHieu;
	psHieu.tuSo = ps1.tuSo*ps2.mauSo - ps2.tuSo*ps1.mauSo;
	psHieu.mauSo = ps1.mauSo*ps2.mauSo;
	
	return psHieu;
}

struct PHAN_SO TichHaiPhanSo(struct PHAN_SO ps1, struct PHAN_SO ps2)
{
	struct PHAN_SO psHieu;
	psHieu.tuSo = ps1.tuSo*ps2.tuSo;
	psHieu.mauSo = ps1.mauSo*ps2.mauSo;
	
	return psHieu;
}

struct PHAN_SO ThuongHaiPhanSo(struct PHAN_SO ps1, struct PHAN_SO ps2)
{
	struct PHAN_SO psHieu;
	psHieu.tuSo = ps1.tuSo*ps2.mauSo;
	psHieu.mauSo = ps1.mauSo*ps2.tuSo;
	
	return psHieu;
}

int main()
{
	struct PHAN_SO phanSo1, phanSo2, psTong;
	NhapPhanSo(phanSo1);
	printf("\n Phan so 1 vua nhap la: ");
	XuatPhanSo(phanSo1);
	NhapPhanSo(phanSo2);
	printf("\n Phan so 2 vua nhap la: ");
	XuatPhanSo(phanSo2);
	
//	ChuanHoaPhanSo(phanSo);
//	printf("\n Phan so sau khi chuan hoa la: ");
//	XuatPhanSo(phanSo);
//	RutGonPhanSo(phanSo);
//	printf("\n Phan so sau khi rut gon la: ");
//	XuatPhanSo(phanSo);
	
	psTong = TongHaiPhanSo(phanSo1, phanSo2);
	RutGonPhanSo(psTong);
	printf("\n Tong hai phan so la: ");
	XuatPhanSo(psTong);
	
	struct PHAN_SO psHieu;
	psHieu = HieuHaiPhanSo(phanSo1, phanSo2);
	RutGonPhanSo(psHieu);
	printf("\n Hieu hai phan so la: ");
	XuatPhanSo(psHieu);

	struct PHAN_SO psTich;
	psTich = TichHaiPhanSo(phanSo1, phanSo2);
	RutGonPhanSo(psTich);
	printf("\n Tich hai phan so la: ");
	XuatPhanSo(psTich);

	struct PHAN_SO psThuong;
	psThuong = ThuongHaiPhanSo(phanSo1, phanSo2);
	RutGonPhanSo(psThuong);
	printf("\n Thuong hai phan so la: ");
	XuatPhanSo(psThuong);
	return 0;
	
}
