#include <stdio.h>

int main()
{
	float dai,rong;
	printf("Nhap vao chieu dai, rong: ");
	scanf("%f %f", &dai, &rong);
	printf("Chu vi hinh chu nhat = %f \nDien tich hinh chu nhat = %f", (dai + rong)*2, dai*rong);
}
