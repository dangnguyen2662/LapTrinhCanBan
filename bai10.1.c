#include	<stdio.h>


void NhapMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf(" Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int TinhTong(int a[], int n)
{
	int i, tong = 0;
	for(i=0; i<n; i++)
	{
		tong+=a[i];
	}
	return tong;
}
int TimMax(int a[], int n)
{
	int i, MAX = a[0];
	for(i=1;i<n;i++)
		if(a[i]>MAX)
			MAX = a[i];
	return MAX;
}


void SapXep(int a[], int n)
{
	int i, j;
	for(i = 0; i<n-1; i++)
		for( j=1+i; j<n; j++)
			if(a[i] > a[j])
				{
					int t = a[i];
					a[i] = a[j]; 
					a[j] = t;
				}
}
int main()
{
	int a[100], n;
	printf("\n Nhap so phan tu: ");
	scanf("%d", &n);
	NhapMang(a, n);
	
	//ghi mang va tong mang vao tap tin
	FILE *file;
	file = fopen("dulieu.txt","wt");
	if(file != NULL)
	{
		int i;
		for(i = 0; i < n; i++)
		{
			fprintf(file, "\n%d", a[i]);
		}
	}
	else
		printf("\n Khong mo dc file !");
		
	//ghi tong	
	fprintf(file, "\n%d", TinhTong(a,n));
	//ghi max
	fprintf(file, "\n%d", TimMax(a, n));
	fflush(file);
	fclose(file);
	
	file = fopen("dulieu.txt","rt");
	if(file != NULL)
	{
		printf("\n Cac gia tri trong file la: \n");
		while(!feof(file))
		{
			int n;
			fscanf(file, "%d", &n);
			printf("%5d", n);
		}
	}
	else
		printf("\n Khong mo dc file !");
		
	fflush(file);
	fclose(file);

	SapXep(a, n);
	file = fopen("dulieu.txt","at");
	if(file != NULL)
	{
		fprintf(file,"\n");
		int i;
		for(i = 0; i < n; i++)
		{
			fprintf(file, "\n%d", a[i]);
		}
	}
	else
		printf("\n Khong mo dc file !");
	fflush(file);
	fclose(file);
	return 0;
}
