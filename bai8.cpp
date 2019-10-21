#include	<stdio.h>

int BoiChungNN(int a, int b);

int main()
{
	int a, b;
	printf("\nNhap so nguyen thu nhat: ");
	scanf("%d", &a);
	printf("\nNhap so nguyen thu hai: ");
	scanf("%d", &b);

	printf("Boi chung nho nhat cua %d va %d la: %d",a, b, BoiChungNN(a, b));
	return 0;
	
}
//tin boi chung nho nhat

int BoiChungNN(int a, int b)
{
	int i;
	for(i=a; ; i++)
		if(i%a==0 && i%b==0)
			return i;
}
