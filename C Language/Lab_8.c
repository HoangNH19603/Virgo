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

void main(){
    int number_of_students;
    printf("Nhap vao so hoc sinh: ");
    scanf("%d", &number_of_students);
    students_array = (students *)malloc(number_of_students * sizeof(students));
    for (int i = 0; i < number_of_students; i++) {
        printf("Nhap vao thong tin hoc sinh thu %d\n", i + 1);
        printf("Nhap vao ten hoc sinh: ");
        gets(students_array[i].name);
        printf("Nhap vao ma hoc sinh: ");
        gets(students_array[i].id);
        printf("Nhap vao ngay sinh: ");
        scanf("%d", &students_array[i].date.day);
        printf("Nhap vao thang sinh: ");
        scanf("%d", &students_array[i].date.month);
        printf("Nhap vao nam sinh: ");
        scanf("%d", &students_array[i].date.year);
        printf("Nhap vao diem: ");
        scanf("%f", &students_array[i].grade);
    }
    for (int i = 0; i < number_of_students; i++)
    {
        printf("Thong tin hoc sinh thu %d\n", i + 1);
        printf("Ten hoc sinh: %s\n", students_array[i].name);
        printf("Ma hoc sinh: %s\n", students_array[i].id);
        printf("Ngay sinh: %d/%d/%d\n", students_array[i].date.day, students_array[i].date.month, students_array[i].date.year);
        printf("Diem trung binh: %.2f\n", students_array[i].grade);
    }
    
}