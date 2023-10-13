#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int[], int n);
int NguyenToDau(int[], int n);

int main()
{
    int a[100];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    float kq = NguyenToDau(a, n);
    if (kq == 0)
        cout << "khong ton tai";
    else
        cout << "so nguyen to dau tien la: " << kq;
    return 0;
}

void Nhap(int a[], int& n)
{
    cout << "nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> setw(8) >> a[i];
    }
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
    cout << endl;
}

bool ktNguyenTo(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % i == 0)
            dem++;
    if (dem == 2)
        return true;
    return false;   
}
int NguyenToDau(int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (ktNguyenTo)
            return a[i];
    return 0;
}