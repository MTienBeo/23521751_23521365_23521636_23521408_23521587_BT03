#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void DaoMang(int[], int);
void DaoChan(int[], int);
void DaoLe(int[], int);
int DemChan(int[], int);

int main()
{
    int a[500];
    int n;
    cout << "\nNhap so phan tu cua mang a: ";
    Nhap(a, n);
    cout << "\nMang a: ";
    Xuat(a, n);

    DaoChan(a, n);
    DaoLe(a, n);
    cout << "\nMang sau khi dao chan le: ";
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

void DaoMang(int a[], int n)
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

void DaoChan(int a[], int n)
{
    int b[100];
    int k = DemChan(a, n);
    int j = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
        {
            b[j++] = a[i];
        }
    DaoMang(b, k);
    j = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            a[i] = b[j++];
}

void DaoLe(int a[], int n)
{
    int b[100];
    int k = n - DemChan(a, n);
    int j = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
        {
            b[j++] = a[i];
        }
    DaoMang(b, k);
    j = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            a[i] = b[j++];
}

int DemChan(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            dem++;
    return dem;
}