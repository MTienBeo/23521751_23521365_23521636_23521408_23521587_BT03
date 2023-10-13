#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DaoMang(float[], int);
void HoanVi(float&, float&);

int main()
{
    float a[500];
    int n;
    cout << "\nNhap so phan tu cua mang a: ";
    Nhap(a, n);
    cout << "\nMang a: ";
    Xuat(a, n);

    DaoMang(a, n);
    cout << "\nMang sau khi dao: ";
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
