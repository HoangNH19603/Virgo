#include <stdio.h>
#include <string.h>

struct sinhvien {
	char mssv[10], tensv[50], nganh[50];
	float dtb;
};

void main() {
	char mssv[10], ten[50], nganh[50];
	int soluong, dem;
	printf("Nhap vao so luong sinh vien muon them: ");
	scanf("%d", &soluong);
	struct sinhvien sv[100];
	for (dem  = 0; dem < soluong; dem++)
	{
		fflush(stdin);
		printf("Nhap vao mssv thu %d: ", dem + 1);
		gets(mssv);
		strcpy(sv[dem].mssv, mssv);
		printf("Nhap vao ho ten sinh vien thu %d: ", dem + 1);
		gets(ten);
		strcpy(sv[dem].tensv, ten);
		printf("Nhap vao nganh hoc: ");
		gets(nganh);
		strcpy(sv[dem].nganh, nganh);
		printf("Nhap vao diem trung binh: ");
		scanf("%f", &sv[dem].dtb);
	}
	for (dem = 0; dem < soluong; dem++)
	{
		printf("Ma so sinh vien: %s\n", sv[dem].mssv);
		printf("Ten sinh vien: %s\n", sv[dem].tensv);
		printf("Sinh vien hoc nganh: %s\n", sv[dem].nganh);
		printf("Diem trung binh: %.2f\n", &sv[dem].dtb);
	}
}