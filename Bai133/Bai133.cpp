#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void XayDung(float[], int, float[], int&);
void Xuat(float[], int);
void Xuat2(float[], int);

int main()
{
	float a[200];
	float b[100];
	int k;
	int n;
	Nhap(a, n);
	Xuat(a, n);
	XayDung(a, n, b, k);
	cout << "Cac so am trong mang" << endl;
	Xuat2(b,k);
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = (-100.0 + rand() / (RAND_MAX / (200.0)));
	}
}
void XayDung(float a[], int n, float b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			b[k++] = a[i];
	}
}
void Xuat(float a[], int n)
{
	cout << "Cac gia tri trong mang la: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << setprecision(4) << a[i];
	}
	cout << endl;
}
void Xuat2(float b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << setw(7) << setprecision(4) << b[i];
	}
}