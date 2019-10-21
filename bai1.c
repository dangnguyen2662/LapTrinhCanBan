#include	<stdio.h>

int main()
{
	int n;
	printf("\nNhap so nguyen duong n: ");
	scanf("%d", &n);
	
	int i, dem=1;
	for(i=2 ; i<n; i++)
		if(n%i==0)
			dem=dem+i;
			
	if(dem==n)
		printf("%d la so hoan hao", n);
	else 
		printf("%d khong phai so hoan hao", n);
		
	return 0;
}

