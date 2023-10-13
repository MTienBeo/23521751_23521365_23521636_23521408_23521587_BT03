#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
int TongCucDai(int[], int);
int TongCucTieu(int[], int);
int TongCucTri(int[], int);

int main()
{
	int k;
	int b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong cuc tri: ";
	cout << TongCucTri(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

int TongCucDai(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] > a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			s = s + a[i];
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}

int TongCucTieu(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] < a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			s = s + a[i];
	if (a[n - 1] < a[n - 2])
		s = s + a[n - 1];
	return s;
}

int TongCucTri(int a[], int n)
{
	int s1 = TongCucDai(a, n);
	int s2 = TongCucTieu(a, n);
	return (s1 + s2);
}