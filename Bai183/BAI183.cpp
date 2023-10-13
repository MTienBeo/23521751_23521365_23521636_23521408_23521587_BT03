#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&, int[], int&);
void Xuat(int[], int);
bool ktCon(int[], int, int[], int);

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
    if (ktCon(a, n, b, k))
        cout << "\nMang a la mang con cua mang b";
    else 
        cout << "\nMang a khong la mang con cua mang b";
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

bool ktCon(int a[], int n, int b[], int k)
{
    bool flag = false;
    if (n > k)
        flag = false;
    for (int vt = 0; vt < k - n; vt++)
    {
        int co = 1;
        for (int i = 0; i < n; i++)
            if (a[i] != b[vt + i])
                co = 0;
        if (co == 1)
            flag = true;
    }
    return flag;
}