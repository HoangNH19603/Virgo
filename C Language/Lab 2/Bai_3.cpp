#include <stdio.h>
#include <math.h>	//Khai bao thu vien math

int main(){
//	nhap ban kinh, tinh chu vi, dien tich hinh tron
	float r;
	printf("Chuong trinh tinh dien tich, chu vi hinh tron\nNhap vao ban kinh: ");
	scanf("%f", &r);
	printf("Chu vi hinh tron ban kinh %f la: %f\nDien tich hinh tron ban kinh %f la: %f", r, 2*M_PI*r, r, (r*r)*M_PI);
}
