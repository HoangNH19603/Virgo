#include<stdio.h>
#include<math.h>	//khai bao thu vien toan

int main(){
	int luachon, a, b, c, delta, kwh, tiendien;	//tao bien n(cho switch case), a, b, c, delta, kwh 
	Start_point:printf("Chon bai: ");
	scanf("%d", &luachon );	
	switch(luachon){
		case 1:
			printf("\nbai 1: ");
			float diem;
			printf("\nnhap diem cua ban: "); 
			scanf("%f",&diem);
			if(diem>=9){
				printf("\nhoc luc xuat sac ");
			}
			else if(8 <= diem && diem < 9){
			    printf("\nhoc luc gioi ");
			}
			else if (6.5 <= diem && diem < 8){
			    printf("\nhoc luc kha ");
			}
			else if (6.5 > diem && diem >= 5){
			    printf("\nhoc luc trung binh ");
			} 
			else if (5 > diem && diem >= 3.5){
			    printf("\nhoc luc yeu ");
			}
			else{
			    printf("\nhoc luc kem ");
			}
		    break;
		case 2:
			printf("Chon phan 1, 2: ");
			int phan;
			scanf("%d", &phan);
			switch(phan){
				case 1:
				    printf("\nBai 2 phan 1:\nNhap vao a, b: ");
			        scanf("%d %d",&a,&b);
					if(a==0){
						if (b==0) printf("\nPt vo so nhiem");
						else printf("\nPt vo nhiem");
					}	
					else{
					printf("\nphuong trinh co nhiem x = -b/a = %d",-b/a);
					return 0;	//thoat chuong trinh
					}
				case 2:
					printf( "\nBai 2 phan 2:\nnhap vao a b c: " );
					scanf("%d %d %d",&a,&b,&c);
					if(a == 0) printf("\nPT thanh bx + c = 0");
					else{
					delta = (b*b) - 4*a*c;
					printf("\nDelta = b^2 - 4ac = %d", delta);
					if(delta<0) printf("\nPT vo nghiem");
					else if(delta==0) printf("\nPT co nghiem kep x = -b/(2*a) = %d", -b/(2*a));
					else printf("\nPT co 2 nghiem rieng biet\nX1 = %.2f\nX2 = %.2f", (-b+sqrt(delta))/2*a, (-b-sqrt(delta))/2*a);	//2 nghiem se la kieu so thuc
					return 0;	//thoat chuong trinh
					}
			}
	    case 3:
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
				printf("So tien can phai tra = %d", tiendien);
			}
			else printf( "sai cu phap ");
			break;
		case 4:
			break;
		default:
			printf("Chi chon tu bai 1-3, 4 de thoat chuong trinh\n");
			goto Start_point;
	}
}
