#include <stdio.h>
#include <stdlib.h>
void nhap(float *a, int n){
    int i;
    for(i=0; i<n; i++){
        printf("Nhap ptu thu %d: ",i);
        scanf("%f", a+i);
    }
}
void in(float *a, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%.2f ", *a+i);
    }
    printf("\n");
}
int main(){
	float *a;
	int n;
	do {
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
		}
	while (n <= 0 || n > 100);
	a = (float *)malloc(n * sizeof(float));
	if (a == NULL) {
        printf("Khong du bo nh? cap phat!\n");
        return 1;
    }
	nhap(a,n);
	printf("Danh sách so thuc:\n");
	in(a, n);
	free(a);
	return 0;
			
	
}
