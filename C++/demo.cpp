#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//  struct nhan vien
typedef struct
{
    string msnv, ten;
    float luong_ngay, luong_thang, thuong;
    int ngay_cong;
}   nhanvien;
int i, j;

// khai bao ham tim_msnv
bool tim_msnv(nhanvien arr[], int n, string key);

// ham nhap thong tin nhan vien
void nhap_tt(nhanvien &nv)
{
    //  rewind(stdin);
    cin.ignore();
    cout << "Ho va ten: ";
    getline(cin, nv.ten);
    cout << "Ma nhan vien: ";
    cin >> nv.msnv;
    cout << "Luong ngay = ";
    cin >> nv.luong_ngay;
    cout << "So ngay cong = ";
    cin >> nv.ngay_cong;
    nv.luong_thang = nv.luong_ngay * nv.ngay_cong;
    if (nv.ngay_cong >= 26)
    {
        nv.thuong = 5000;
    }
    else
    {
        if (22 <= nv.ngay_cong)
        {
            nv.thuong = 2000;
        }
        else if (24 <= nv.ngay_cong)
        {
            nv.thuong = 3000;
        }
        else
        {
            nv.thuong = 1000;
        }
    }
}

// nhap danh sach nhan vien
void ndsnv(nhanvien arr[], int end, int start = 0)
{
    for (i = start; i < end; i++)
    {
				do
				{
		        cout << "\nNhap thong tin nhan vien thu " << i + 1 << endl;
		        nhap_tt(arr[i]);
						if (tim_msnv(arr, i, arr[i].msnv))
						{
								cout << "Ma nhan vien da ton tai, xin moi nhap lai...\n" << endl;
						}
				} while (tim_msnv(arr, i, arr[i].msnv));
    }
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

// nv co ngay cong cao nhat
void print(nhanvien nv[], int n)
{
    nhanvien caonhat = nv[0];
    for (i = 0; i < n; i++)
    {
        if (nv[i].ngay_cong > caonhat.ngay_cong)
        {
            caonhat = nv[i];
        }
    }
    xuat_tt(caonhat);
}

void hoan_vi(nhanvien &nv1, nhanvien &nv2)
{
		nhanvien temp = nv1;
		nv1 = nv2;
		nv2 = temp;
}

// sap xep nhan vien theo thuong giam dan
void sort(nhanvien nv[], int n)
{
    // nhanvien temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nv[i].thuong < nv[j].thuong)
            {
								hoan_vi(nv[i], nv[j]);
                // temp = nv[i];
                // nv[i] = nv[j];
                // nv[j] = temp;
            }
        }
    }
}

// them danh sach nhan vien
void them_dsnv(nhanvien nv[], int &n, int end)
{
		ndsnv(nv, n + end, n);
		n += end;
}

// ham tim msnv
bool tim_msnv(nhanvien arr[], int n, string key)
{
		int count = 0;
		for (i = 0; i < n; i++)
		{
				if (key.compare(arr[i].msnv) == 0)
				{
						count++;
				}
		}
		if (count != 0)
		{
				return true;
		}
		return false;
}// neu tim thay msnv tra ve true, neu khong tim thay tra ve false

// ham xac dinh vi tri nhan vien trong mang
int tim_vi_tri_nv_trong_mang(nhanvien arr[], int n, string key)
{
		for (i = 0; i < n; i++)
		{
				if (key.compare(arr[i].msnv) == 0)
				{
						return i;
				}
		}
		return -1;
}// tra ve vi tri cua phan tu neu tim thay. Neu khong, tra ve -1

// xoa nhan vien theo msnv
void xoa_msnv(nhanvien arr[], int &n, string key)
{
		if (tim_msnv(arr, n, key))
		{
				for (i = tim_vi_tri_nv_trong_mang(arr, n, key); i < n; i++)
				{
						arr[i] = arr[i + 1];
				}
				n--;
				cout << "Da xoa nhan vien " << key << endl;
				return;
		}
		cout << "Khong tim thay nhan vien " << key << endl;
}

int main()
{
    nhanvien nv[100];
    int soluong, luachon = 0, them = 0;
		string msnv = "";
    do
    {
        cout << "+----------------------------- MENU -----------------------------+" << endl;
        cout << "|                  1. Nhap danh sach nhan vien                   |" << endl;
        cout << "|                   2. In danh sach nhan vien                    |" << endl;
        cout << "|           3. Thong tin nhan vien ngay cong cao nhat            |" << endl;
        cout << "|             4. Sap xep theo tien thuong giam dan               |" << endl;
        cout << "|                5. Them vao danh sach nhan vien                 |" << endl;
        cout << "|                   6. Xoa nhan vien theo msnv                   |" << endl;
        cout << "|                  7. Xuat danh sach nhan vien                   |" << endl;
        cout << "|                8. Nhap/in danh sach nhan vien                  |" << endl;
        cout << "|                     0. Thoat chuong trinh                      |" << endl;
        cout << "+------------------------------ END -----------------------------+" << endl;
        cout << "Moi nhap vao lua chon: ";
        cin >> luachon;
        system("cls");
        switch (luachon)
        {
            case 0:
            {
                cout << "Bye Bye..." << endl;
                break;
            }
            case 1:
            {
                cout << "1. Nhap danh sach nhan vien" << endl;
                cout << "Nhap so luong nhan vien: ";
                cin >> soluong;
                ndsnv(nv, soluong);
                break;
            }
            case 2:
            {
                cout << "2. In danh sach nhan vien" << endl;
                xdsnv(nv, soluong);
                break;
            }
            case 3:
            {
                cout << "3. Thong tin nhan vien ngay cong cao nhat" << endl;
                print(nv, soluong);
                break;
            }
            case 4:
            {
                cout << "4. Sap xep theo tien thuong giam dan" << endl;
                sort(nv, soluong);
                cout << "Hoan thanh sap xep..." << endl;
                break;
            }
            case 5:
            {
                cout << "5. Them vao danh sach nhan vien" << endl;
                //goi ham
								cout << "Nhap vao so luong muon them: ";
								cin >> them;
								them_dsnv(nv, soluong, them);
								// soluong += them;
                break;
            }
						case 6:
						{
								cout << "6. Xoa nhan vien theo msnv" << endl;
								cout << "Nhap vao msnv: ";
								cin >> msnv;
								cout << tim_vi_tri_nv_trong_mang(nv, soluong, msnv);
								xoa_msnv(nv, soluong, msnv);
								break;
						}
            default:
                cout << "Cyka blyat!!" << endl;
                break;
        }
        system("pause");
        system("cls");
    } while (luachon != 0);
    return 0;
}