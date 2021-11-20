#include <stdio.h>	//khai bao thu vien

int main()		//tao ham main
{	
	float num1, num2;	//khai bao 2 bien num1, num2 kieu float
	printf("Chuong trinh tinh tong, hieu 2 so nhap vao: ");		//in ra man hinh
	scanf("%f %f", &num1, &num2);	//nhap vao tu ban phim num1 va num2
	printf("Tong %f + %f la: %f \nHieu %f - %f la: %f", num1, num2, num1+num2, num2, num1, num2-num1);
	return 0;
}
