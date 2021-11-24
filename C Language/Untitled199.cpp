#include<stdio.h>
#include<math.h>

int main(){	
	int n , a , b ,c ,d;
	quaylai:printf("Chon bai: ");
	scanf("%d",&n);
//	quaylai:
	printf("nhap vao a b c \n");
	scanf("%d \n%d\n %d",&a,&b,&c);	
	switch(n)
	{
		case 1:
			printf("bai 1: Giai PTB2 a^2 + bx + c = 0");
			if(a == 0) printf("\nPT thanh bx + c = 0");
			else{
				d = (b*b) - 4*a*c;
				printf("\nDelta = b^2 - 4ac = %d", d);
				if(d<0) printf("\nPT vo nghiem");
				else if(d==0) printf("\nPT co nghiem kep x = -b/(2*a) = %d", -b/(2*a));
				else printf("\nPT co 2 nghiem rieng biet\nX1 = %d\nX2 = %d", (-b+sqrt(d))/2*a, (-b-sqrt(d)/2*a));
			}
		    break;
		case 2:
		    printf("bai 2: ");
		
			if(a>=b && a>=c)
			    {printf("max la: %d",a);}
			else if(c>=b && c>=a)
			    {printf("max la: %d",c);}
			else
			    {printf("max la: %d",b);}
		    break;
		case 3:
			printf("bai 3: ");
			if(a<=0||b<=0||c<=0)
			{
			printf("phai nhap so duong");
			goto quaylai;
			}
			if(a+b>c && a+c>b && b+c>a)
			{
				int p = (a+b+c)/2;
			    int s = sqrt(p*(p-a)*(p-b)*(p-c));
			    printf("chu vi la : %d",p*2);
			    printf(" dien tich la : %d",s);
			}
			break;
	    default:
	    	printf("Chi chon bai tu 1 - 3\n");
			goto quaylai;			
	}
		
		
}

