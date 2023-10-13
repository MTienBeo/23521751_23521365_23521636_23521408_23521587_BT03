#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&, int[], int&);
void Xuat(int[], int);
int demCon(int[], int, int[], int);

int main()
{
    int a[500];
    int n;
    int b[500];
    int k;

    Nhap(a, n, b, k);
    cout << "\nMang a: ";
    Xuat(a, n);
    cout << "\nMang b: ";
    Xuat(b, k);

    cout << "\nSo lan mang a xuat hien trong b: " << demCon(a, n, b, k);
    return 0;
}

void Nhap(int a[], int& n, int b[], int& k)
{
    cout << "\nNhap so phan tu cua mang a: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
    cout << "\nNhap so phan tu cua mang b: ";
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cout << "Nhap b[" << i << "]: ";
        cin >> b[i];
    }
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

int demCon(int a[], int n, int b[], int k)
{
    int dem = 0;
    if (n > k)
        return dem;
    for (int vt = 0; vt <= k - n; vt++)
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
            if (a[i] != b[vt + i])
                flag = false;
        if (flag)
            dem++;
    }
    return dem;
}