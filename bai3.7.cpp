#include	<stdio.h>

int UocChungLN(int a, int b);

int main()
{
	int a, b;
	printf("\nNhap so nguyen thu nhat: ");
	scanf("%d", &a);
	printf("\nNhap so nguyen thu hai: ");
	scanf("%d", &b);

	printf("\nUoc chung lon nhat cua %d va %d la: %d",a, b, UocChungLN(a, b));
	return 0;
	
}
//tin boi chung nho nhat

int UocChungLN(int a, int b)
{
	int i;
	for(i=a; ; i++)
		if(a%i==0 && b%i==0)
			return i;
}
