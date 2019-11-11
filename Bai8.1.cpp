#include	<stdio.h>
#include	<math.h>

// Dinh nghia struc PHAN_SO
struct PS
{
	int x;
	int y;
};

void NhapPhanSo(struct PS &ps)
{
	printf("\n Nhap tu so: ");
	scanf("%d", &ps.x);
	printf("\n Nhap mau so: ");
	scanf("%d", &ps.y);
	while(ps.y == 0)
	{
		printf("\n Vui long nhap mau so khac 0.");
		printf("\n Nhap lai mau so: ");
		scanf("%d", &ps.y);
	}
}

void XuatPhanSo(struct PS ps)
{
	printf("%d/%d\t\t", ps.x, ps.y);
}

void ChuanHoaPhanSo(struct PS &ps)
{
	if(ps.y < 0)
	{
		ps.x = ps.x * (-1);
		ps.y = ps.y * (-1);
	}
}

int UocChungLonNhat(int a, int b)
{
	for(int i = abs(a); i > 0; i--)
		if(a%i==0 && b%i==0)
			return i;
}

void RutGonPhanSo(struct PS &ps)
{
	int ucln = UocChungLonNhat(ps.x, ps.y);
	ps.x = ps.x/ucln;
	ps.y = ps.y/ucln;
}

struct PS TongHaiPhanSo(struct PS ps1, struct PS ps2)
{
	struct PS psTong;
	psTong.x = ps1.x*ps2.y + ps2.x*ps1.y;
	psTong.y = ps1.y*ps2.y;
	return psTong;
}

struct PS Tong(struct PS a[], int n)
{
	int i;
	struct PS tong;
	
	for(i=0; i<n-1; i++)
	{
		a[i+1] = TongHaiPhanSo(a[i], a[i+1]);
	}
	return a[n-1];
}

struct PS TimMin(struct PS a[], int n)
{
	int i;
	struct PS min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i].x / a[i].y < min.x/min.y)
			min = a[i];
	}
	return min;
}

void HoanVi(struct PS &a, struct PS &b)
{
	struct PS t=a;
	a=b;
	b=t;
}
void XapXepTang(struct PS a[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=i+1; j<n;j++)
		{
			if(a[i].x / a[i].y < a[j].x / a[j].y)
				HoanVi(a[i], a[j]);
		}
}
int main()
{
	int i, n;
	struct PS a[100];
	printf("\n Nhap so luong phan so trong bang : ");
	scanf("%d", &n);
	
	//nhap bang phan so
	for(i = 0; i< n; i++)
	{
		printf("\n Nhap phan so thu %d: \n", i+1);
		NhapPhanSo(a[i]);
	}
	//xuat bang phan so
	printf("\n Bang phan so vua nhap la:\n ");
	for(i = 0; i< n; i++)
		XuatPhanSo(a[i]);
		
	//Chuan hoa bang phan so
	for(i=0; i<n; i++)
		ChuanHoaPhanSo(a[i]);
	printf("\n Bang phan so sau chuan hoa la:\n ");
	for(i = 0; i< n; i++)
		XuatPhanSo(a[i]);	
	
	//rut gon bang gphan so
	for(i = 0; i< n; i++)
		RutGonPhanSo(a[i]);
	printf("\n Bang phan so sau rut gon la:\n ");
	for(i = 0; i< n; i++)
		XuatPhanSo(a[i]);	
		
	//sao chep bang phan so
	struct PS b[100];
	for(i=0; i<n;i++)
		b[i]=a[i];
	
	//tinh tong cac ps	
	struct PS psTong;
	psTong = Tong(b, n);
	ChuanHoaPhanSo(psTong);
	RutGonPhanSo(psTong);
	printf("\n Tong = %d/%d", psTong.x, psTong.y);
	
	//tim ps nho nhat
	struct PS Min;
	Min=TimMin(a, n);
	printf("\n Phan so nho nhat trong bang la: %d/%d", Min.x, Min.y);
	
	//sap xep tang
	XapXepTang(a, n);
	printf("\n Bang phan so sau khi sap xep la:\n ");
	for(i = 0; i< n; i++)
		XuatPhanSo(a[i]);
	

	return 0;
}

