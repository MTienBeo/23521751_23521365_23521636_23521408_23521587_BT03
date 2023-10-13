#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int LeDauTien(int[], int);
int LeNhoNhat(int[], int);
int TimGiaTri(int[], int);
void Xuat(int[], int);

int main()
{
	int n;
	int a[200];
	Nhap(a, n);
	Xuat(a, n);
	cout << "Gia tri chan lon nhat nho hon moi gia tri le trong mang la: " << TimGiaTri(a, n);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100);
	}
}
int LeDauTien(int a[], int n)
{
	for (int i =0; i<n;i++)
	{
		if (a[i] % 2 != 0)
			return a[i];
	}
	return 0;
}
int LeNhoNhat(int a[], int n)
{
	int lc = LeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0 && a[i] < lc)
			lc = a[i];		
	}
	return lc;
}
int TimGiaTri(int a[], int n)
{
	int lc = LeNhoNhat(a, n);
	if (lc == 0)
		return -1;
	return lc - 1;
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
