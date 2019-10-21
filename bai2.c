#include	<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int k;
	printf("Nhap k de tinh nCk: k = ");
	scanf("%d", &k);
	
	printf("To hop chap %d cua %d la: %dC%d = %d", k, n, n, k, GiaiThua(n)/(GiaiThua(k)*GiaiThua(n-k)));
}

//ham tinh giai thua
int GiaiThua(int n)
{
	if(n==0 || n==1)
		return 1;
	else 
	return n*GiaiThua(n-1);
}
