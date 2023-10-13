#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void XayDung(float[], int, float[], int&);
void Xuat(float[], int);
void Xuat2(int[], int);

int main()
{
	float a[200];
	float b[100];
	int k;
	int n;
	Nhap(a, n);
	Xuat(a, n);
	XayDung(a, n, b, k);
	cout << "Mang moi voi cac phan tu bang tong cac phan tu lan can la: " << endl;
	Xuat2(b, k);
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
	if (n == 1)
	{
		k = 1;
		b[0] = 0;
	}
	k = n;
	b[0] = a[1];
	for (int i = 1; i < n - 1; i++)
		b[i] = a[i - 1] + a[i + 1];
	b[k - 1] = a[n - 2];
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
void Xuat2(int b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << setw(7) << setprecision(4) << b[i];
	}
}