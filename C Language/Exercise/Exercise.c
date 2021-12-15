#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char bo[30],me[30];
	int tuoibo,tuoime;	
}	giadinh;

giadinh nhapthongtin(){
	giadinh gd;
	printf("Nhap vao ten cua bo: ");
	gets(gd.bo);
	printf("Nhap tuoi bo: ");
	scanf("%d",gd.tuoibo);
	printf("Nhap vao ten cua me: ");
	gets(gd.me);
	printf("Nhap tuoi me: ");
	scanf("%d",gd.tuoime);
	return gd;
}

void xuat(giadinh gd){
	printf("ten bo:%s\n",gd.bo);
	printf("tuoi cua bo:%d\n",gd.tuoibo);
	printf("ten me:%s\n",gd.me);
	printf("tuoi cua me:%d\n",gd.tuoime);
}

float bai3(float diem[], int n){
	int i;
    for(i = 0; i < n; i++){
        printf("Nhap diem sinh vien %d:", i+1);
        scanf("%f", &diem[i]);
    }
    float max = diem[0];
    system("cls");
    printf("Xuat thong tin sinh vien\n");
    printf("So luong sinh vien: %d\n", n);
    printf("So luong sinh vien co diem > 5:\n");
    for (i = 0; i < n; i++){
        if(diem[i] > 5){
            printf("Diem sinh vien %d = %.2f\n", i+1, diem[i]);
        }
        if(max < diem[i]){
            max = diem[i];
        }
    }
    printf("Diem sinh vien cao nhat = %.2f\n", max);
}

int main(){
	int chuc_nang, n, i;
	giadinh gd1;
	do{
		printf("...Menu....\n");
		printf("Bai1 thong tin gia dinh\n");
	printf("Bai2 So chia het cho 5\n");
		printf("bai3 thong tin sinh vien thi lap trinh\n");
		printf("0.Thoat\n");
		printf(".................................");
		scanf("%d",&chuc_nang);
		fflush(stdin);
		switch(chuc_nang){
		case 1: {
			printf("1.thong tin gia dinh\n");
			gd1=nhapthongtin();
			xuat(gd1);
			break;
		}
		case 2:{
			printf("2. So chia het cho 5\n");
			for(i=0;i<=n;i++){
				if(i%5==0){
					printf("%d chia het cho 5\n",i);
				}
			}
			break;
		}
		case 3:{
			printf("3. Thong tin sinh vien thi Lap Trinh\n");
			printf("Nhap so luong sinh vien: ");
			scanf("%d", &n);
			bai3(diem, &n);
			break;
		}
		case 0:{
			printf("THOAT!!!\n");
			break;
		}
		default:
			printf("Chi nhap tu 0-3\n");
		}
	}	while(chuc_nang != 0);
	return 0;
}