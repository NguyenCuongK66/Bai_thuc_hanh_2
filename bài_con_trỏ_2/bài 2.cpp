#include <stdio.h>
#include <stdlib.h>
void nhap(float a[], int n, int m){
int i, j;
for(i=0; i<n; i++)
for(j=0; j<m; j++)
{
printf("Nhap a[%d][%d]: ",i, j);
scanf("%f", a+i*m+j);
}
}
void in(float a[], int n, int m){
int i, j;
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
printf("%.2f ", *(a+i*m+j));
printf("\n");
}
}
int main(){
	float *a;
	int n,m;
	do {
		printf("Hang: ");
		scanf("%d", &n);
		printf("Cot: ");
		scanf("%d", &m);
		}
	while (n <= 0 || n > 100 || m <= 0 || m > 100);
	a = (float *)malloc(n * m * sizeof(float));
	if (a == NULL) {
        printf("loi\n");
        return 1;
    }
	nhap(a, n, m);
	printf("Danh sách so thuc:\n");
	in(a, n, m);
	free(a);
	return 0;
}
