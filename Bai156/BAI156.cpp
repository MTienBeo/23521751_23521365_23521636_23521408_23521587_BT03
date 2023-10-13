#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void DaoMang(float[], int);
void DaoDuong(float[], int);
int DemDuong(float[], int);

int main()
{
    float a[500];
    int n;
    cout << "\nNhap so phan tu cua mang a: ";
    Nhap(a, n);
    cout << "\nMang a: ";
    Xuat(a, n);

    DaoDuong(a, n);
    cout << "\nMang sau khi dao cac so duong: ";
    Xuat(a, n);

    return 0;
}

void Nhap(float a[], int& n)
{
    cin >> n;
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

void HoanVi(float& a, float& b)
{
    float temp = a;
    a = b;
    b = temp;
}

void DaoMang(float a[], int n)
{
    int i = 0;
    int j = n - 1;
    while (j >= i)
    {
        HoanVi(a[i], a[j]);
        i++;
        j--;
    }
}

void DaoDuong(float a[], int n)
{
    float b[100];
    int k = DemDuong(a, n);
    int j = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
        {
            b[j++] = a[i];
        }
    DaoMang(b, k);
    j = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            a[i] = b[j++];
}

int DemDuong(float a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            dem++;
    return dem;
}