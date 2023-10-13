#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[],int&,int [],int&);
int kiemTra(int[],int,int);
int demGiaTri(int[], int, int[], int);
int main()
{
    int a[100],b[100];
    int n, m;
    Nhap(a,n,b,m);
}

void Nhap(int a[], int& n, int b[], int& m)
{
    cout << "nhap so luong phan tu mang a: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> setw(8) >> a[i];
    }
    cout << "nhap so luong phan tu mang b: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "Nhap b[" << i << "]: ";
        cin >> setw(8) >> b[i];
    }
    cout << "so luong la: " << demGiaTri(a, n, b, m);
}
int kiemTra(int a[], int n, int x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            dem++;
    }
    return dem;
}
int demGiaTri(int a[], int n, int b[], int m)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j] == a[i])
                flag = 0;
        }
        if (kiemTra(b, m, a[i]) == 0 && flag == 1)
        {
            dem++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (b[j] == b[i])
                flag = 0;
        }
        if (kiemTra(a, n, b[i]) == 0 && flag == 1)
        {
            dem++;
        }
    }
    return dem;
}
