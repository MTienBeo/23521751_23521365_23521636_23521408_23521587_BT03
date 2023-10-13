#include<iostream>
#include<iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
void Nhap(float[], int&);
void NguyenHoa(float[], int);
void Xuat(float[], int);
void Xuat2(float[], int);

int main()
{
	float a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	NguyenHoa(a, n);
	cout << "Mang moi sau khi nguyen hoa la: " << endl;
	Xuat2(a, n);
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
void NguyenHoa(float a[], int n)
{
	for (int i = 0; i< n; i++)
	{
		if (a[i] > 0)
			a[i] = int(a[i] + 0.5);
		else
			a[i] = int(a[i] - 0.5);
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