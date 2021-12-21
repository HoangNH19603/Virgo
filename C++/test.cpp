#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

typedef struct
{
    string msnv, ten;
    float luong_ngay, luong_thang, thuong;
    int ngay_cong;
}   nhanvien;
int i, j;

void nhap_file(nhanvien arr[], int &n)
{
	ifstream fin;
	fin.open("employee.dat", ios_base::in);
	if (fin.fail())
	{
			cout << "Khong mo duoc file" << endl;
			return;
	}
	fin >> n;
	for (i = 0; i < n; i++)
	{
		getline(fin, arr[i].ten, ';');
		getline(fin, arr[i].msnv, ';');
		fin >> arr[i].luong_ngay;
		fin >> arr[i].ngay_cong;
		fin >> arr[i].luong_thang;
		fin >> arr[i].thuong;
	}
	fin.close();
	cout << "Da nhap file thanh cong" << endl;
}

// xuat thong tin nhan vien
void xuat_tt(nhanvien nv)
{
    cout << "Ho va ten: " << nv.ten << endl;
    cout << "Ma nhan vien: " << nv.msnv << endl;
    cout << "Luong ngay = " << nv.luong_ngay << endl;
    cout << "So ngay cong = " << nv.ngay_cong << endl;
    cout << "Luong thang = " << nv.luong_thang << endl;
    cout << "Thuong = " << nv.thuong << endl;
}

// xuat danh sach nhan vien
void xdsnv(nhanvien arr[], int n)
{
    for (i = 0; i < n; i++)
    {
        cout << "\nThong tin nhan vien thu " << i + 1 << endl;
        xuat_tt(arr[i]);
    }
}

int main()
{
	nhanvien nv[100];
	int soluong;
	nhap_file(nv, soluong);
	cout << "2. In\bdanh\bsach\bnhan\bvien" << endl;
	xdsnv(nv, soluong);
	return 0;
}