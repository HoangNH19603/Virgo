#include <stdio.h>

void main(){
	int luachon, item, ab, a, b, count, snt_scp, kwh, tiendien, batdau, ketthuc, thoigian;
    float tien_karaoke;
    ab=0, item=0, count=0;
    printf("\nChuc nang 1: Kiem tra so nguyen");
    printf("\nChuc nang 2: Tim uoc so chung va boi so chung");
    printf("\nChuc nang 3: Tinh tien quan karaoke");
    printf("\nChuc nang 3: Tinh tien dien");
    printf("\nXin moi chon chuc nang (1,2,3,4): ");
    scanf("%d", &luachon);
    switch(luachon)
    {
        case 1:
            printf("\nNhap vao 1 so: ");
            scanf("%d", &snt_scp);
            for(item=2; item<snt_scp; item++){
                if(snt_scp % item == 0)	count++;
            }
            if(count==0 && snt_scp!=1)	printf("%d la so nguyen to", snt_scp);
            else	printf("%d khong phai so nguyen to", snt_scp);
            count=0;
            for(item=1; item<=snt_scp; item++){
                if(item*item == snt_scp){
                printf("%d la so chinh phuong",snt_scp);
                count++;
                }
            }
            if(count==0)	printf("%d khong phai so chinh phuong", snt_scp);
            break;
        case 2:
            printf("\nNhap vao 2 so: ");
            scanf("%d %d", &a, &b);
            ab=a*b;
            while(a!=b){
                if(a>b){
                    a=a-b;
                }
                else{
                    b=b-a;
                }
            }
            printf("\nUoc so chung lon nhat la %d", a);
            printf("\nBoi so chung nho nhat la %d", ab/a);
            break;
        case 3:
            printf("\nNhap vao gio bat dau (12h -> 23h): ");
            scanf("%d", &batdau);
            printf("\nNhap vao gio ket thuc: ");
            scanf("%d", &ketthuc);
            if(batdau>=12 && ketthuc<=23){
                thoigian=ketthuc-batdau;
                if(thoigian<=3) tien_karaoke=thoigian*150;
                else if(thoigian>=4){
                    thoigian-=3;
                    tien_karaoke=(3*150)+((thoigian*150)-((thoigian*150)*30/100));  //tien karaoke 3h dau tien + tien karaoke sau 4h
                }
                if(14<=batdau<=17)  tien_karaoke-=tien_karaoke*10/100;
            }
            else{
                printf("\nGio bat dau phai nam trong khoang 12h -> 23h");
                printf("\nGio ket thuc phai nam trong khoang 12h -> 23h");
            }
            printf("\nTien karaoke: %.3fd", tien_karaoke);
            break;
        case 4:
            printf("\nBai 3\nNhap vao so dien tieu thu hang thang: ");
			scanf("%d",&kwh);
			if(kwh>0){
				if(kwh <=50)	tiendien=kwh*1678;	//bac 1
				else if(50<=kwh<=100){	//bac 2
					kwh-=50;	// 1 bac truoc
					tiendien=(kwh*1734)+(50*1678);
				}	//tien dien bac 2 + tien dien bac 1
				else if(101<=kwh<=200){	//bac 3
					kwh-=100;	// 2 bac truoc
					tiendien=(kwh*2014)+((50*1734)+(50*1678));
				}	//tien dien bac 3 + tien dien bac 2 + tien dien bac 1
				else if(201<=kwh<=300){	//bac 4
					kwh-=200;	// 3 bac truoc
					tiendien=(kwh*2536)+((100*2014)+(50*1734)+(50*1678));
				}	//tien dien bac 4 + tien dien bac 3 + tien dien bac 2...
				else if(301<=kwh<=400){	//bac 5
					kwh-=300;	// 4 bac truoc
					tiendien=(kwh*2834)+((100*2536)+(100*2014)+(50*1734)+(50*1678));
				}	//tien dien bac 5 + tien dien bac 4 + tien dien bac 3...
				else{	//bac 6
					kwh-=400;	// 5 bac truoc
					tiendien=(kwh*2927)+((100*2834)+(100*2536)+(100*2014)+(50*1734)+(50*1678));
				}	//tien dien bac 6 + tien dien bac 5 + tien dien bac 3...
				printf("So tien can phai tra = %dd", tiendien);
			}
			else printf( "sai cu phap ");
			break;
		default:
		    printf("\nChuc nang khong hop le");
    }
    return 0;
}
