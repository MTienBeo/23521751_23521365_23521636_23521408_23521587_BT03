#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int kiemTra(int[], int, int);
void lietKe(int[], int);
int main()
{
    int a[100];
    int n;
    Nhap(a, n);
    lietKe(a, n);
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
int kiemTra(int a[], int n,int x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            dem++;
    }
    return dem;
}
void lietKe(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int kq = kiemTra(a, n, a[i]);
        if (kq == 1)
        cout << setw(8) << a[i];
    }

}