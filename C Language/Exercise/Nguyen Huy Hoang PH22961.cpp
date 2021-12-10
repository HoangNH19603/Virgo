#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void thongtin(){
	char diachi[50], ten[20];
	printf("Nhap ten: ");
	gets(ten);
	printf("Nhap dia chi: ");
	gets(diachi);
	system("cls");
	puts(ten);
	puts(diachi);
}

void xeploai(int tuoi){
	if (tuoi < 1)	printf("Tuoi toi thieu = 1\n");
	else {
		if (tuoi < 18)	printf("Tuoi tre\n");
		else if (tuoi >= 18 && tuoi <= 55)	printf("Tuoi lao dong\n");
		else	printf("Tuoi gia\n");
	}
}

void vatnuoi(int soluong){
	int i;
	float cannang[100], min=0;
	
	for	(i = 0; i < soluong; i++){
		printf("Nhap vao can nang vat nuoi %d: ", i+1);
		scanf("%f", &cannang[i]);
	}
	
	for	(i = 0; i < soluong; i++){
		if (cannang[i] > 30){
			printf("Can nang vat nuoi %d = %.2f\n", i+1, cannang[i]);
		}
		if (min == 0 || cannang[i] < min){
			min = cannang[i];
		}
	}
	printf("Vat nuoi co can nang be nhat la: %.2f", min);
}


int main(){
	int luachon, tuoi, soluong;
	
	do{
		system("cls");
		printf("+--------------------Menu--------------------+\n");
		printf("%35s", "1. Thong tin ca nhan\n");
		printf("%36s", "2. Xep loai nhan vien\n");
		printf("%36s", "3. Thong tin vat nuoi\n");
		printf("%23s", "0. Thoat\n");
		printf("+--------------------------------------------+\n");
		printf("Moi chon:");
		scanf("%d", &luachon);
		fflush(stdin);
		system("cls");
		switch(luachon){
			case 0:{
				printf("Bye Bye\n");
				break;
			}
			case 1:{
				printf("%35s", "1. Thong tin ca nhan\n");
				thongtin();
				break;
			}
			case 2:{
				printf("%35s", "2. Xep loai nhan vien\n");
				printf("Nhap tuoi: ");
				scanf("%d", &tuoi);
				xeploai(tuoi);
				break;
			}
			case 3:{
				printf("%36s", "3. Thong tin vat nuoi\n");
				printf("Nhap so luong: ");
				scanf("%d", &soluong);
				vatnuoi(soluong);
				break;
			}
			default:
				printf("Chi nhap vao 0 - 3\n");
		}
		system("pause");
	}	while(luachon != 0);
	return 0;
}
