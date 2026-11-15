#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char maSV[20];
    char hoTen[50];
    float diem1;
    float diem2;
    float diem3;
} SinhVien;

void nhapDanhSach(SinhVien *ds, int *n) {
    printf("Nhap so luong sinh vien: ");
    scanf("%d", n);
    
    while (getchar() != '\n');

    for (int i = 0; i < *n; i++) {
        printf("%d\n", i + 1);
        
        printf("Ho ten: ");
        fgets((ds + i)->hoTen, sizeof((ds + i)->hoTen), stdin);
        (ds + i)->hoTen[strcspn((ds + i)->hoTen, "\n")] = 0;
        
        printf("Ma: ");
        fgets((ds + i)->maSV, sizeof((ds + i)->maSV), stdin);
        (ds + i)->maSV[strcspn((ds + i)->maSV, "\n")] = 0;

        printf("Ðiem 1: ");
        scanf("%f", &(ds + i)->diem1);
        printf("Ðiem 2: ");
        scanf("%f", &(ds + i)->diem2);
        printf("Ðiem 3: ");
        scanf("%f", &(ds + i)->diem3);
        
        while (getchar() != '\n');
    }
}


void inDanhSach(SinhVien *ds, int n) {
    printf("DANH SÁCH SINH VIÊN\n");
    printf("%-10s  %-20s  %-3s  %-3s  %-3s\n", "Ma", "Ho ten", "Ðiem 1", "Ðiem 2", "Ðiem 3");
    
    for (int i = 0; i < n; i++) {
        printf("%-10s  %-20s  %2.2f  %6.2f  %6.2f\n",
               (ds + i)->maSV,
               (ds + i)->hoTen,
               (ds + i)->diem1,
               (ds + i)->diem2,
               (ds + i)->diem3);
    }
}

int main() {
    int n;
    SinhVien *ds = (SinhVien *)malloc(100 * sizeof(SinhVien));
    
    if (ds == NULL) {
        printf("Loi cap phat bo nho!\n");
        return 1;
    }

    nhapDanhSach(ds, &n);

    inDanhSach(ds, n);

    free(ds);

    return 0;
}
