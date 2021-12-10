#include <stdio.h>

int main(){
//	Chuong trinh tinh diem trung binh toan(x3),ly(x2),hoa(x1)
	float toan,ly,hoa;
	printf("Nhap vao diem toan, ly, hoa: ");
	scanf("%f %f %f", &toan, &ly, &hoa);
	printf("Diem trung binh cua ban la: %f", (toan*3 + ly*2 + hoa)/6);
}
