#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktCon(int[], int, int, int);
int TongCon(int[], int, int, int);
void LietKe(int[], int);

int main()
{
    int a[500];
    int n;

    Nhap(a, n);
    cout << "\nMang ban dau: ";
    Xuat(a, n);
    cout << "\nTat ca mang tang: ";
    LietKe(a, n);

    return 0;
}

void Nhap(int a[], int& n)
{
    cout << "\nNhap so phan tu cua mang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

bool ktCon(int a[], int n, int vt, int l)
{
    for (int i = vt; i < vt + l - 1; i++)
        if (a[i] > a[i + 1])
            return false;
    return true;
}

int TongCon(int a[], int n, int vt, int l)
{
    int S = 0;
    for (int i = vt; i < vt + l; i++)
        S += a[i];
    return S;
}

void LietKe(int a[], int n)
{
    for (int l = 1; l <= n; l++)
        for (int vt = 0; vt <= n - l; vt++)
            if (ktCon(a, n, vt, l))
            {
                cout << endl;
                for (int i = 0; i < l; i++)
                    cout << setw(8) << a[vt + i];
                cout << "\nTong la: " << TongCon(a, n, vt, l);
            }

}