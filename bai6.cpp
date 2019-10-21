#include	<stdio.h>

float TongBPND(int n);

int main()
{
	printf("\nNhap n: n = ");
	float n;
	scanf("%f", &n);
	
	printf("Tong binh phuong nghich dao cac so ti 1 den n la: %.4f", TongBPND( n));
	return 0;
	
}

//ham tinh
float TongBPND(int n)
{
	float i;
	float dem = 1;
	for(i=2; i<=n;i++)
	{
		dem = dem +1/(i*i);
	}
	return dem;
}
