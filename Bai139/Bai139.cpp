#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Hoanvi(int&, int&);
void SapLeTang(int[], int);
void Xuat(int[], int);
void Xuat2(int[], int);

int main()
{
	int a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	SapLeTang(a, n);
	cout << "Mang co cac vi tri le trong mang cac so nguyen tang dan cac gia tri: " << endl;
	Xuat2(a, n);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() %200;
	}
}
void Hoanvi(int& x, int& y)
{
	float temp = x;
	x = y;
	y = temp;
}
void SapLeTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((i % 2 != 0) && j % 2 != 0 && a[i] > a[j])
				Hoanvi(a[i], a[j]);
		}
	}
}
void Xuat(int a[], int n)
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