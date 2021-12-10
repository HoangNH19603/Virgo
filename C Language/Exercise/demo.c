#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char ten[20], diachi[50];
	int tuoi;
}	nhanvien;

nhanvien *nv;
int i;

nhanvien nhap(){
	nhanvien nvien;
	printf("Nhap ten: ");
	fgets(nvien.ten, 20, stdin);
	printf("Nhap dia chi: ");
	fgets(nvien.diachi, 50, stdin);
	return nvien;
}

nhanvien xuat(nhanvien nvien){
	puts(nvien.ten);
	puts(nvien.diachi);
}

int main(){
	int soluong;
	printf("Nhap vao so nhan vien: ");
	scanf("%d", &soluong);
	nv = (nhanvien*) malloc(soluong*sizeof(nhanvien));
	fflush(stdin);
	nv[0] = nhap();
	xuat(nv[0]);
}