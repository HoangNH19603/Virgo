#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int phantu, item, jtem, tong=0, count=0, min, max, temp, hang, cot;

int nhap(){ //ham dau vao
    printf("Nhap vao so phan tu trong mang: ");
    scanf("%d", &phantu);
    }   while(phantu<2);
    return phantu;
}

void tongchia3(){
    phantu=nhap();
    int Arr[phantu];
    for(item=0; item<phantu; item++){
        printf("Nhap vao Arr[%d]: ",item+1);
        scanf("%d", &Arr[item]);
        if(Arr[item]%3==0){
            tong+=Arr[item];
            count++;
        }
    }
    if(count==0)    count=1;
    printf("Trung binh tong cac so chia het cho 3 trong mang la: %.2f\n",(float)tong/count);
}

void MIN_MAX(){
    phantu=nhap();
    int Arr[phantu];
    for(item=0; item<phantu; item++){
        printf("Nhap vao Arr[%d]: ", item+1);
        scanf("%d", &Arr[item]);
    }
    for(item=0; item<phantu; item++){
        if(Arr[item]>max)   max=Arr[item];
    }
    min=max;
    for(item=0; item<phantu; item++){
        if(Arr[item]<min)   min=Arr[item];
    }
    printf("min = %d\nmax = %d\n", min, max);
}

void sort(){
    phantu=nhap();
    int Arr[phantu];
    for(item=0; item<phantu; item++){
        printf("Nhap vao Arr[%d]: ", item+1);
        scanf("%d", &Arr[item]);
    }
    for(item=0; item<phantu; item++){
        for(jtem=0; jtem<phantu; jtem++){
            if(Arr[item]>Arr[jtem]){
                temp=Arr[item];
                Arr[item]=Arr[jtem];
                Arr[jtem]=temp;
            }
        }
    }
    for(item=0; item<phantu; item++){
        printf("Vi tri thu %d cua mang la %d\n", item, Arr[item]);
    }
}

void binhphuong(){
    do{
    printf("\nKhoi tao mang 2 chieu\nNhap so hang muon tao: ");
    scanf("%d", &hang);
    printf("Nhap so cot muon tao: ");
    scanf("%d", &cot);
    }   while(hang<2 || cot<2);
    int Arr[hang][cot];
    for(item=0; item<hang; item++){
        for(jtem=0; jtem<cot; jtem++){
            printf("Moi nhap vao gia tri mang Arr[%d][%d]: ", item, jtem);
            scanf("%d", &Arr[item][jtem]);
        }
    }
    printf("\n<---------------<<BAN VUA NHAP VAO MANG>>--------------->\n");
    for(item=0; item<hang; item++){
        for(jtem=0; jtem<cot; jtem++){
            printf("Gia tri cua Arr[%d][%d] = %d\t", item, jtem, Arr[item][jtem]);
        }   printf("\n");
    }
    printf("\n<---------------<<BINH PHUONG CUA MANG>>---------------->\n");
    for(item=0; item<hang; item++){
        for(jtem=0; jtem<cot; jtem++){
            printf("Binh phuong cua Arr[%d][%d] = %d\t", item, jtem, Arr[item][jtem]*Arr[item][jtem]);
        }   printf("\n");
    }
}

void main() {
    int luachon;
    do{
        system("cls");  //xoa man hinh
        printf("Chuc nang 1: tinh tong cac so chia het cho 3 trong mang\n");
        printf("Chuc nang 2: tim gia tri lon nhat, gia tri nho nhat cua mang\n");
        printf("Chuc nang 3: sap xep mang theo gia tri giam dan\n");
        printf("Chuc nang 4: binh phuong mang 2 chieu\n");
        printf("Chuc nang 5: thoat chuong trinh\n");
        printf("Moi lua chon chuc nang: ");
        scanf("%d", &luachon);
        switch(luachon){
            case 1:
            tongchia3();
            break;
            case 2:
            MIN_MAX();
            break;
            case 3:
            sort();
            break;
            case 4:
            binhphuong();
            break;
            case 5:
            printf("Thoat chuong trinh\n");
            break;
            default:
            printf("Nhap cac gia tri 1-5 thoi nha!\n");
        }
        if(luachon!=5){  //neu khong phai chuc nang thoat chuong trinh
            for(item=15; item>0; item--){   //delay thoi gian 15s cho nguoi dung xem ket qua
                printf("\rChuong trinh se tiep tuc sau %ds", item);
                sleep(1);
            }
        }
    }   while(luachon!=5);
    printf("Bye bye");
}