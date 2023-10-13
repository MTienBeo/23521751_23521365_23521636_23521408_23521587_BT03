#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
int ChuSoDau(int);
int TongGiaTri(int[], int);

int main()
{
	int k;
	int b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong gia tri: ";
	cout << TongGiaTri(b, k);
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

int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t = t / 10;
	return t;
}

int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ChuSoDau(a[i]) % 2 != 0)
			s = s + a[i];
	return s;
}