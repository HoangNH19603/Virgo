#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

//create struct students
typedef struct {    //struct students
    char name[50];
    char id[10];
    Date date;
    float grade;
} students;

int i,j;
students *students_array;

students nhapthongtin(){
    students student;
    fflush(stdin);
    printf("\nNhap ten: ");
    gets(student.name);
    printf("\nNhap ma so: ");
    gets(student.id);
    printf("\nNgay sinh: ");
    scanf("%d", &student.date.day);
    printf("\nNhap thang: ");
    scanf("%d", &student.date.month);
    printf("\nNhap nam: ");
    scanf("%d", &student.date.year);
    do{
        printf("\nNhap diem: ");
        scanf("%f", &student.grade);
    }   while(student.grade < 0 || student.grade > 10);
    return student;
}

void print(students student){
    printf("\nTen: %s", student.name);
    printf("\nMa so: %s", student.id);
    printf("\nNgay sinh: %d/%d/%d", student.date.day, student.date.month, student.date.year);
    printf("\nDiem: %.2f\n", student.grade);
}

void sort(students student[], int number_of_students){
    for (i = 0; i < number_of_students; i++)
    {
        for (j = i + 1; j < number_of_students; j++)
        {
            if (student[i].grade > student[j].grade)
            {
                students temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
    for (i = 0; i < number_of_students; i++)
    {
        print(student[i]);
    }
}

void search(students student[], int number_of_students, char keyword[]){
    for (i = 0; i < number_of_students; i++) {
        if (strcmpi(keyword, student[i].id) == 0){
            printf("<------------------<< THONG TIN SINH VIEN >>------------------>");
            print(student[i]);
            return;
        }
    }
    printf("KHONG TON TAI MA SO SINH VIEN NAY!");
}

void thongbao(){
    system("cls");
    printf("CHUA NHAP THONG TIN SINH VIEN, AN PHIM 1 DE NHAP LAI!\n");
}

void main(){
    int number_of_students=0, luachon;
    char id[10];
    do
    {
        system("cls");
        printf("<==========================<< MENU >>==========================>");
        printf("\nChuc nang 1: nhap va xuat thong tin sinh vien");
        printf("\nChuc nang 2: xuat ra thong tin sinh vien theo diem tang dan");
        printf("\nChuc nang 3: tim kiem sinh vien");
        printf("\nNhap vao so 4 de thoat chuong trinh!");
        printf("\nLua chon cua ban: ");
        scanf("%d", &luachon);
        switch(luachon){
        case 1:
            system("cls");
            printf("<-------------<< NHAP/XUAT THONG TIN SINH VIEN >>------------->");
            do{
                printf("\nNhap vao so hoc sinh: ");
                scanf("%d", &number_of_students);
            } while(number_of_students<2);
            students_array = (students *)malloc(number_of_students * sizeof(students));
            for (i = 0; i < number_of_students; i++) {
                printf("Nhap vao thong tin sinh vien thu %d\n", i + 1);
                students_array[i] = nhapthongtin();
            }
            system("cls");
            for (i = 0; i < number_of_students; i++) {
                printf("\n<--------------<< THONG TIN SINH VIEN THU %d >>-------------->", i + 1);
                print(students_array[i]);
            }
            break;
        case 2:
            if(number_of_students==0){
                thongbao();
                break;
            }
            system("cls");
            printf("<-----<< XUAT RA THONG TIN SINH VIEN THEO DIEM TANG DAN >>----->");
            sort(students_array, number_of_students);
            break;
        case 3:
            if(number_of_students==0){
                thongbao();
                break;
            }
            system("cls");
            fflush(stdin);
            printf("<------------------<< TIM KIEM SINH VIEN >>------------------>");
            printf("\nNhap vao ma so sinh vien: ");
            scanf("%s", id);
            search(students_array, number_of_students, id);
            break;
        case 4:
            printf("THOAT CHUONG TRINH\nBye bye...\n");
            break;
        default:
            printf("Chi chon gia tri tu 1 den 4 thoi nhe!\n");
        }
        system("pause");
    }   while(luachon!=4);
}
