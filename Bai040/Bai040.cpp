#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float a[], int& n);
void Xuat(float a[], int n);
float TongCucTieu(float a[], int n);

int main()
{
	int k;
	float b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong gia tri: ";
	cout << TongCucTieu(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (200.0)));
}

void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

float TongCucTieu(float a[], int n)
{
	float s = 0;
	if (n == 1)
		s = s + a[0];
	for (int i = 0; i <= n - 2; i++)
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			s += a[i];
	if (a[n - 1] < a[n - 2])
		s = s + a[n - 1];
	return s;
}