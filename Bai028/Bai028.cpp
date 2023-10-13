#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float a[], int& n);
void Xuat(float a[], int n);
float DuongDau(float a[], int n);
float DuongNhoNhat(float a[], int n);
void LietKe(float a[], int n);

int main()
{
	int k;
	float b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Liet ke: ";
	LietKe(b, k);
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

float DuongDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			return a[i];
	return -1;
}

float DuongNhoNhat(float a[], int n)
{
	float lc = DuongDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n - 1; i++)
		if (a[i] > 0 && a[i] < lc)
			lc = a[i];
	return lc;
}


void LietKe(float a[], int n)
{
	if (DuongNhoNhat(a, n) == -1)
	{
		cout << "Khong co gia tri duong";
		return;
	}
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == DuongNhoNhat(a,n))
			cout << i;
}
