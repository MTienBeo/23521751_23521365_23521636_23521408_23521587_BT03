#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
int demGiaTri(float[], int);

int main()
{
    float a[100];
    int n;
    Nhap(a, n);
    cout << "so luong la: " << demGiaTri(a, n);
    return 0;
}

void Nhap(float a[], int& n)
{
    cout << "nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> setw(8) >> a[i];
    }
}
int demGiaTri(float a[], int n)
{

    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < i; j++)
        {
            if (a[j] == a[i])
                flag = false;
        }
        if (flag == true)
            dem++;
    }
            return dem;
}