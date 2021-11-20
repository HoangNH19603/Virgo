#include <stdio.h>

void main(){
	int luachon, item, min, max, tong, count, snt_scp;
	do{
		item=0, tong=0, count=0;	//reset gia tri
		printf("\nChuc nang 1: Tinh trung binh tong");
		printf("\nChuc nang 2: Tim so nguyen to");
		printf("\nChuc nang 3: Tim so chinh phuong");
		printf("\nChuc nang 4: Thoat");
		printf("\nXin moi chon chuc nang (1,2,3,4): ");
		scanf("%d", &luachon);
		switch(luachon)
		{
			case 1:
				printf("\nNhap vao min, max: ");
				scanf("%d %d", &min, &max);
				for(min; min<=max; min++)
				{
					if(min%2==0)
					{
					tong += min;
					count++;
					}
				}
				/*	Cach 2
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
				printf("\nTrung binh tong = %d", tong/count);
				break;
			case 2:
				printf("\nNhap vao 1 so: ");
				scanf("%d", &snt_scp);
				for(item=2; item<snt_scp; item++){
					if(snt_scp % item == 0)	count++;
				}
				if(count==0 && snt_scp!=1)	printf("%d la so nguyen to", snt_scp);
				else	printf("%d khong phai so nguyen to", snt_scp);
				break;
			case 3:
				printf("\nNhap vao 1 so: ");
				scanf("%d", &snt_scp);
				for(item=1; item<=snt_scp; item++){
					if(item*item == snt_scp){
					printf("%d la so chinh phuong",snt_scp);
					count++;
					}
				}
				if(count==0)	printf("%d khong phai so chinh phuong", snt_scp);
				break;
		}
	}	while(luachon != 4);
	printf(":U bai baiiiiii");
}
