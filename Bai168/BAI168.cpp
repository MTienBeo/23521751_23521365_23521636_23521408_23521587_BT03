#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int TanSuat(float[], int, float);
void XoaViTri(float[], int&, int);
void XoaTrung(float[], int&, float);
void XoaTanSuat(float[], int&);

int main()
{
	float b[500];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);

	XoaTanSuat(b, k);
	cout << "\nMang cac phan tu chi xuat hien 1 lan: ";
	Xuat(b, k);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "\nNhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

int TanSuat(float a[], int n ,float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void XoaViTri(float a[], int& n, int vt)
{
	for (int i = vt; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaTrung(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}

void XoaTanSuat(float a[], int& n)
{
	for (int i = 0; i < n; i++)
		if (TanSuat(a, n, a[i]) > 1)
			XoaTrung(a, n, a[i]);
}