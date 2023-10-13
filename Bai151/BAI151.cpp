#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void DuaVeDau(int[], int);

int main()
{
    int a[500];
    int n;
    cout << "\nNhap so phan tu cua mang a: ";
    Nhap(a, n);
    cout << "\nMang a: ";
    Xuat(a, n);

    DuaVeDau(a, n);
    cout << "\nMang sau khi dua so chia het cho 3 ve dau: ";
    Xuat(a, n);

    return 0;
}

void Nhap(int a[], int& n)
{
    cin >> n;
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

void HoanVi(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void DuaVeDau(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        if (a[i] % 3 != 0)
            for (int j = i + 1; j < n; j++)
                if (a[j] % 3 == 0 && !flag)
                {
                    HoanVi(a[i], a[j]);
                    flag = true;
                }
    }
}