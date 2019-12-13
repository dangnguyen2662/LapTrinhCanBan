#include	<stdio.h>

void XuatMang( int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%5d", a[i]);
	}
}
int main()
{
	int a[100], n=0;
	FILE *file;
	file = fopen("dulieu.txt", "rt");
	if(file !=NULL)
	{
		while(!feof(file))
		{
			fscanf(file, "%d", &a[n]);
			n++;
		}
	}
	else 
		printf("\n Khong mo dc file !");
		
	fflush(file);
	fclose(file);
	printf("\n Mang vua doc la: ");
	XuatMang(a, n);
	
	file = fopen("ketquachan.txt", "wt");
	int i, x=0;
	if(file!=NULL)
	{
		for(i = 0; i < n; i++)
			if(a[i]%2==0)
			{
				fprintf(file, "%d ", a[i]);
				x++;
			}
		if(x==0)
			printf("\n Khong co so chan ");
		else
			printf("\n may cai so chan trong ketquachan.txt");
	}
	else 
		printf("\n khong mo dc file");
	fflush(file);
	fclose(file);
	
	return 0;
}
