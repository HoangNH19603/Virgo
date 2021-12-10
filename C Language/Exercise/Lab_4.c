#include <stdio.h>
#include <stdlib.h>

int luachon, item, min, max, count, snt_scp, temp;	//global variable
long tong;

void snt(int snt_scp){	//ham kiem tra so nguyen to
	if(snt_scp<2){
        printf("\n%d khong phai SNT",snt_scp);
    }
    else{
        for(item=2; item<snt_scp; item++){
            if(snt_scp % item == 0){
                printf("\n%d khong phai SNT",snt_scp);
                return;
            }
        }
        printf("\n%d la SNT", snt_scp);
        return;
    }
}

void scp(int snt_scp){	//ham kiem tra so chinh phuong
	for(item=1; item<=snt_scp; item++){
		if(item*item == snt_scp){
		printf("%d la so chinh phuong",snt_scp);
		return;
		}
	}
	printf("%d khong phai so chinh phuong", snt_scp);
}

void main(){
	do{
		item=0, tong=0, count=0;	//reset gia tri
		system("cls");	//clear man hinh windows
		printf("\nChuc nang 1: Tinh trung binh tong");
		printf("\nChuc nang 2: Tim so nguyen to");
		printf("\nChuc nang 3: Tim so chinh phuong");
		printf("\nChuc nang 4: Thoat\n");
		printf("\nXin moi chon chuc nang (1,2,3,4): ");
		scanf("%d", &luachon);
		switch(luachon)
		{
			case 1:
				printf("\nNhap vao min, max: ");
				scanf("%d %d", &min, &max);
				if(min%2!=0 || max%2!=0){   //Cach 1: tinh theo cong thuc
					if(min%2!=0)    min++;
					else if(max%2!=0)    max--;
				}
				tong=min/2+max/2;
				printf("Trung binh tong = %ld", tong);
				
				// if(min>max){ //Dao gia tri neu min>max (chi dung trong cach 2,3)
				//     temp=max;
				//     max=min;
				//     min=temp;
				// }
				/*  Cach 2: vong lap for
				for(min; min<=max; min++)
				{
					if(min%2==0)
					{
					tong += min;
					count++;
					}
				}*/
				
				/*	Cach 3: vong lap while
				item = min;
				while(item <= max)
				{
					if(item%2==0)
					{
						tong += item;
						count++;
					}
					item++;
				}*/
				// if(count==0)	count = 1;
				// printf("\nTrung binh tong = %ld", tong/count);    //Dung trong cach 2, cach 3
				break;
			case 2:
				printf("\nNhap vao 1 so: ");
				scanf("%d", &snt_scp);
				snt(snt_scp);
				break;
			case 3:
				printf("\nNhap vao 1 so: ");
				scanf("%d", &snt_scp);
                scp(snt_scp);
				break;
			case 4:
				printf("\nKet thuc chuong trinh");
				break;
			default:
				printf("\nChi nhap gia tri trong khoang tu 1 den 4");
		}
		system("pause");	//tam dung
	}	while(luachon != 4);
	printf(":U bai baiiiiii");
	return 0;
}