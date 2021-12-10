#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int item, jtem, count=0;
typedef struct{
    int ngay, thang, nam;
}   date;
typedef struct{
    char hoten[50], mssv[10], hocluc[20];
    float diem;
    date ngay_sinh;
}   students;
students *hoc_sinh;

//bai 7 nhap thong tin
students nhap_thong_tin(){
    students student;
    fflush(stdin);
    printf("\nNhap ho ten: ");
    gets(student.hoten);
    printf("\nNhap MSSV: ");
    gets(student.mssv);
    printf("\nNhap diem: ");
    do{
        scanf("%f", &student.diem);
        printf("\nNhap ngay sinh: ");
    }   while (student.diem<0 || student.diem>10);
    if (student.diem>=9)
        strcpy(student.hocluc, "Xuat sac");
    else if (student.diem>=8)
        strcpy(student.hocluc, "Gioi");
    else if (student.diem>=6.5)
        strcpy(student.hocluc, "Kha");
    else if (student.diem>=5)
        strcpy(student.hocluc, "Trung binh");
    else
        strcpy(student.hocluc, "Yeu");
    scanf("%d", &student.ngay_sinh.ngay);
    printf("\nNhap thang sinh: ");
    scanf("%d", &student.ngay_sinh.thang);
    printf("\nNhap nam sinh: ");
    scanf("%d", &student.ngay_sinh.nam);
    return student;
}

//bai 7 sap xep thong tin
void sort(students hoc_sinh[], int n){
    students temp;
    for (item=0; item<n-1; item++){
        for (jtem=item+1; jtem<n; jtem++){
            if (hoc_sinh[item].diem<hoc_sinh[jtem].diem){
                temp = hoc_sinh[item];
                hoc_sinh[item] = hoc_sinh[jtem];
                hoc_sinh[jtem] = temp;
            }
        }
    }
}

//bai 7 in ra thong tin
void print_student(students student){
    printf("\nHo ten: %s", student.hoten);
    printf("\nMSSV: %s", student.mssv);
    printf("\nDiem: %.2f", student.diem);
    printf("\nHoc luc: %s", student.hocluc);
    printf("\nNgay sinh: %d/%d/%d", student.ngay_sinh.ngay, student.ngay_sinh.thang, student.ngay_sinh.nam);
}

//bai 1
void SNT_SCP(){
    int snt_scp;
    printf("\nNhap vao 1 so: ");
    scanf("%d", &snt_scp);
    for(item=3; item<snt_scp; item++){
        if(snt_scp % item == 0)	count++;
    }
    if(count == 0 && snt_scp > 1)	printf("%d la so nguyen to\n", snt_scp);
    else{
        printf("%d khong phai so nguyen to\n", snt_scp);
    }
    count=0;
    for(item=1; item<=snt_scp; item++){
        if(item*item == snt_scp){
        printf("%d la so chinh phuong\n",snt_scp);
        count++;
        }
    }
    if(count==0)	printf("%d khong phai so chinh phuong\n", snt_scp);
}

//bai 2
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

//bai 3
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

//bai 4
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

//bai 5
void doitien(int tien){
    int _200k=0, _100k=0, _50k=0, _20k=0, _10k=0, _5k=0, _2k=0, _1k=0;
    do {
        if (tien >= 500)    //menh gia 500
        {
            _200k = tien/200;
            tien %= 200;
            // printf("%d to 200k\n", _200k);
            if (tien >= 100)
            {
                _100k = tien/100;
                tien %= 100;
                // printf("%d to 100k\n", _100k);
            }
        }
        else if (tien >= 200)    //menh gia 200
        {
            _100k = tien/100;
            tien %= 100;
        }
        else if (tien >= 100)     //menh gia 100
        {
            _50k = tien/50;
            tien %= 50;
        }
        else if (tien >= 50)     //menh gia 50
        {
            _20k = tien/20;
            tien %= 20;
            if (tien >= 10)
            {
                _10k = tien/10;
                tien %= 10;
            }
        }
        else if (tien >= 20)     //menh gia 20
        {
            _10k = tien/10;
            tien %= 10;
        }
        else if (tien >= 10)      //menh gia 10
        {
            _5k = tien/5;
            tien %= 5;
        }
        else if (tien > 2)     //menh gia 5
        {
            _2k = tien/2;
            tien %= 2;
        }
        else if (tien >= 1)
        {
            _1k = tien/1;
            tien %= 1;
        }
    }   while (tien != 0);
    printf("%d to 200k\n%d to 100k\n%d to 50k\n%d to 20k\n%d to 10k\n%d to 5k\n%d to 2k\n%d to 1k\n", _200k, _100k, _50k, _20k, _10k, _5k, _2k, _1k);
}

//bai 8
void game(int num1, int num2){
    int rand1 = rand() % 15;
    int rand2 = rand() % 15;
    if ((num1 == rand1 && num2 == rand2) || (num1 == rand2 && num2 == rand1)){
        printf("Chuc mung ban duoc giai nhat\n");
    }
    else if (num1 == rand1 || num2 == rand2 || num1 == rand2 || num2 == rand1)
    {
        printf("Chuc mung ban duoc giai nhi\n");
    }
    else
    {
        printf("Ban da doan sai\n");
    }
    printf("rand1 = %d\nrand2 = %d\nnum1 = %d\nnum2 = %d", rand1, rand2, num1, num2);
}

//bai 6
void vaytragop(int vay){
    int lai, goc = vay/12;
    printf("%6s %15s %15s %20s %20s\n", "ky han", "lai phai tra", "goc phai tra", "so tien phai tra", "so tien con lai");
    for (item = 1; item <= 12; item++){
        lai = vay*5/100;
        vay -= goc;
        printf("%3d %15d %15d %18d %23d\n", item, lai, goc, goc+lai, vay);
    }
}

//bai 9
void tinhphanso(){
    float phanso1, phanso2, a1, a2, b1, b2;
    printf("Nhap vao tu so cua a: ");
    scanf("%d", &a1);
    printf("Nhap vao mau so cua a: ");
    scanf("%d", &a2);
    printf("Nhap vao tu so cua b: ");
    scanf("%d", &b1);
    printf("Nhap vao mau so cua b: ");
    scanf("%d", &b2);
    if (a2 == 0 || b2 == 0)
    {
        printf("Mau so phai khac 0 nha!");
        return;
    }
    phanso1 = (float) a1/a2;
    phanso2 = (float) b1/b2;
    printf("Tong cua %.0f/%.0f + %.0f/%.0f la: %f\n", a1, a2, b1, b2, phanso1+phanso2);
    printf("Hieu cua %.0f/%.0f + %.0f/%.0f la: %f\n", a1, a2, b1, b2, phanso1-phanso2);
    printf("Tich cua %.0f/%.0f + %.0f/%.0f la: %f\n", a1, a2, b1, b2, phanso1*phanso2);
    if (phanso2 !=0){
        printf("Thuong cua %.0f/%.0f + %.0f/%.0f la: %f\n", a1, a2, b1, b2, phanso1/phanso2);
        return;
    }
    printf("Phan so thu 2 = 0, khong co phep chia cho 0\n");
}

int main(){
    int lua_chon, num1, num2, so_hoc_sinh;
    do{
        system("cls");
        printf("<---------------<< MENU >>--------------->\n");
        printf("Chuc nang 1: kiem tra so nguyen to, so chinh phuong\n");
        printf("Chuc nang 2: tim boi chung nho nhat va uoc chung lon nhat cua 2 so\n");
        printf("Chuc nang 3: tinh hoa don tien karaoke\n");
        printf("Chuc nang 4: tinh hoa don tien dien\n");
        printf("Chuc nang 5: doi tien te\n");
        printf("Chuc nang 6: tinh lai suat vay ngan hang tra gop\n");
        printf("Chuc nang 7: sap xep thong tin sinh vien\n");
        printf("Chuc nang 8: xay dung game FPOLY LOTT\n");
        printf("Chuc nang 9: chuong trinh tinh toan phan so\n");
        printf("An phim 0 de thoat\n");
        printf("<---------------------------------------->\n");
        printf("Nhap lua chon: ");
        scanf("%d", &lua_chon);
        system("cls");
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
                scanf("%d", &num1);
                printf("Nhap vao gio ket thuc (bat dau < ket thuc < 23h: ");
                scanf("%d", &num2);
                karaoke(num1, num2);
                break;
            case 4:
                printf("Chuc nang 4: tinh hoa don tien dien\n");
                printf("Nhap vao so kwh tieu thu: ");
                scanf("%d", &num1);
                dien(num1);
                break;
            case 5:
                printf("Chuc nang 5: doi tien te\n");
                do{
                    printf("Nhap vao so tien can doi: ");
                    scanf("%d", &num1);
                }   while (num1 < 0);
                doitien(num1);
                break;
            case 6:
                printf("Chuc nang 6: tinh lai suat vay ngan hang tra gop\n");
                printf("Nhap vao so tien can vay: ");
                scanf("%d", &num1);
                if (num1 <= 0)
                {
                    printf("So tien vay tra gop phai lon hon 0");
                    break;
                }
                vaytragop(num1);
                break;
            case 7:
                printf("Chuc nang 7: sap xep thong tin sinh vien\n");
                printf("Nhap vao so hoc sinh: ");
                scanf("%d", &so_hoc_sinh);
                hoc_sinh = (students*)malloc(so_hoc_sinh*sizeof(students));
                for (item = 0; item < so_hoc_sinh; item++){
                    printf("Nhap thong tin cho sinh vien thu %d\n", item+1);
                    hoc_sinh[item] = nhap_thong_tin();
                }
                sort(hoc_sinh, so_hoc_sinh);
                for (item = 0; item < so_hoc_sinh; item++){
                    printf("Thong tin sinh vien thu %d\n", item+1);
                    print_student(hoc_sinh[item]);
                }
                break;
            case 8:
                printf("Chuc nang 8: xay dung game FPOLY LOTT\n");
                printf("Nhap vao 2 so: ");
                scanf("%d %d", &num1, &num2);
                game(num1, num2);
                break;
            case 9:
                printf("Chuc nang 9: chuong trinh tinh toan phan so\n");
                tinhphanso();
                break;
            case 0:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
                break;
        }
        system("pause");
    }   while (lua_chon != 0);
    return 0;
}