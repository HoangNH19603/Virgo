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
    for (int i = 0; i < number_of_students; i++)
    {
        for (int j = i + 1; j < number_of_students; j++)
        {
            if (student[i].grade > student[j].grade)
            {
                students temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
    for (int i = 0; i < number_of_students; i++)
    {
        print(student[i]);
    }
}

void thongbao(){
    system("cls");
    printf("Chua nhap thong tin sinh vien, xin moi nhap lai!\n");
    system("pause");
    system("cls");
}

void main(){
    int number_of_students=0, luachon;
    char id[10];
    do
    {
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
            for (int i = 0; i < number_of_students; i++) {
                printf("Nhap vao thong tin sinh vien thu %d\n", i + 1);
                students_array[i] = nhapthongtin();
            }
            system("cls");
            for (int i = 0; i < number_of_students; i++) {
                printf("\n<----------<<Thong tin sinh vien thu %d>>---------->", i + 1);
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
        }
    }   while(luachon!=4);
}