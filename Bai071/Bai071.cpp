#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&, int[], int&);
int kiemTra(int[], int, int);
int demGiaTri(int[], int, int[], int);
int main()
{
    int a[100], b[100];
    int n, m;
    Nhap(a, n, b, m);
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
int demGiaTri(int a[], int n, int b[], int m)
{
    int dem = 0;
    if (n > m)
        return 0;
    for (int vt = 0; vt <= m - n; vt++)
    {
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[vt + i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            dem++;
    }
    return dem;
}