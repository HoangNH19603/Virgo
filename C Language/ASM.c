// xay dung menu 10 chuc nang, lap di lap lai den khi an so 10 de thoat, clear man hinh moi khi hoan thanh 1 chuc nang
#include <stdio.h>
#include <stdlib.h>

int item, count=0;

void SNT_SCP(){
    int snt_scp;
    printf("\nNhap vao 1 so: ");
    scanf("%d", &snt_scp);
    for(item=2; item<snt_scp; item++){
        if(snt_scp % item == 0)	count++;
    }
    if(count==0 && snt_scp<2)	printf("%d la so nguyen to\n", snt_scp);
    else	printf("%d khong phai so nguyen to\n", snt_scp);
    count=0;
    for(item=1; item<=snt_scp; item++){
        if(item*item == snt_scp){
        printf("%d la so chinh phuong\n",snt_scp);
        count++;
        }
    }
    if(count==0)	printf("%d khong phai so chinh phuong\n", snt_scp);
}

void bcnn_ucln(int a, int b){
    int ab=a*b;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    printf("Uoc so chung lon nhat la %d\n", a);
    printf("Boi so chung nho nhat la %d\n", ab/a);
}

void karaoke(int batdau, int ketthuc){
    int thoigian;   float tien_karaoke;
    if(batdau>=12 && ketthuc<=23 && batdau<ketthuc){
        thoigian=ketthuc-batdau;
        if(thoigian<=3){
            tien_karaoke=thoigian*150;
        }
        else if(thoigian>=4){
            thoigian-=3;
            tien_karaoke=(3*150)+((thoigian*150)-((thoigian*150)*30/100));  //tien karaoke 3h dau tien + tien karaoke sau 4h
        }
        if(14<=batdau<=17){
            tien_karaoke-=tien_karaoke*10/100;
        }
    printf("Tien karaoke: %.3fd\n", tien_karaoke);
    }
    else{
        printf("Gio bat dau va gio ket thuc phai nam trong khoang 12h -> 23h");
    }
}

void dien(int kwh){
    int tiendien;
    if(kwh>0){
        if(kwh <=50)	tiendien=kwh*1678;	//bac 1
        else if(50<=kwh<=100){	//bac 2
            kwh-=50;	// -1 bac truoc tinh rieng
            tiendien=(kwh*1734)+(50*1678);
        }	//tien dien bac 2 + 50 so tien dien bac 1
        else if(101<=kwh<=200){	//bac 3
            kwh-=100;	// -2 bac truoc tinh rieng
            tiendien=(kwh*2014)+((50*1734)+(50*1678));
        }	//tien dien bac 3 + 50 so tien dien bac 2 + 50 so tien dien bac 1
        else if(201<=kwh<=300){	//bac 4
            kwh-=200;	// -3 bac truoc tinh rieng
            tiendien=(kwh*2536)+((100*2014)+(50*1734)+(50*1678));
        }	//tien dien bac 4 + 100 so tien dien bac 3 + 50 so tien dien bac 2...
        else if(301<=kwh<=400){	//bac 5
            kwh-=300;	// -4 bac truoc tinh rieng
            tiendien=(kwh*2834)+((100*2536)+(100*2014)+(50*1734)+(50*1678));
        }	//tien dien bac 5 + tien dien bac 4 + tien dien bac 3...
        else{	//bac 6
            kwh-=400;	// 5 bac truoc tinh rieng
            tiendien=(kwh*2927)+((100*2834)+(100*2536)+(100*2014)+(50*1734)+(50*1678));
        }	//tien dien bac 6 + tien dien bac 5 + tien dien bac 3...
        printf("So tien can phai tra = %dd\n", tiendien);
    }
    else printf("So dien tieu thu nho hon 0\n");
}

int main(){
    int lua_chon, num1, num2, batdau, ketthuc, kwh;
    do{
        system("cls");
        printf("<---------------<< MENU >>--------------->\n");
        printf("Chuc nang 1: kiem tra so nguyen to, so chinh phuong\n");
        printf("Chuc nang 2: tim boi chung nho nhat va uoc chung lon nhat cua 2 so\n");
        printf("Chuc nang 3: tinh hoa don tien karaoke\n");
        printf("Chuc nang 4: tinh hoa don tien dien\n");
        printf("Chuc nang 5: doi tien te\n");
        printf("Chuc nang 6: tinh lai xuat vay ngan hang tra gop\n");
        printf("Chuc nang 7: sap xep thong tin sinh vien\n");
        printf("Chuc nang 8: xay dung game FPOLY LOTT\n");
        printf("Chuc nang 9: xay dung chuong trinh tinh toan phan so\n");
        printf("An phim 10 de thoat\n");
        printf("<---------------------------------------->\n");
        printf("Nhap lua chon: ");
        scanf("%d", &lua_chon);
        switch(lua_chon){
            case 1:
                printf("Chuc nang 1: kiem tra so nguyen to, so chinh phuong\n");
                SNT_SCP();
                break;
            case 2:
                printf("Chuc nang 2: tim boi chung nho nhat va uoc chung lon nhat cua 2 so\n");
                printf("Nhap vao 2 so: ");
                scanf("%d %d", &num1, &num2);
                bcnn_ucln(num1, num2);
                break;
            case 3:
                printf("Chuc nang 3: tinh hoa don tien karaoke\n");
                printf("Nhap vao gio bat dau (12h -> 23h): ");
                scanf("%d", &batdau);
                printf("Nhap vao gio ket thuc (bat dau < ket thuc < 23h: ");
                scanf("%d", &ketthuc);
                karaoke(batdau, ketthuc);
                break;
            case 4:
                printf("Chuc nang 4: tinh hoa don tien dien\n");
                printf("Nhap vao so kwh tieu thu: ");
                scanf("%d", &kwh);
                dien(kwh);
                break;
            case 5:
                printf("Chuc nang 5: doi tien te\n");
                break;
            case 10:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
                break;
        }
        system("pause");
    }   while (lua_chon != 10);
    return 0;
}