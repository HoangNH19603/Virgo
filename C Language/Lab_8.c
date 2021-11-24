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
	struct sinhvien sv[5];
	for (dem  = 0; dem < soluong; dem++)
	{
		printf("Nhap vao mssv: ");
		scanf("%s", mssv);
		strcpy(sv[dem].mssv, mssv);
	}
	for (dem = 0; dem < soluong; dem++)
	{
		printf("%s\n", sv[dem].mssv);
	}
	getchar();
}