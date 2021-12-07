#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int ngay, thang, nam;
}	date;

typedef struct
{
	char mssv[10], lop[10], hoten[50];
	float dtb;
	date ngaysinh;
}	sinhvien;

sinhvien sv[50];

int main(){
	fgets(sv[0].hoten, 50, stdin);
	printf("%s", sv[0].hoten);
	return 0;
}