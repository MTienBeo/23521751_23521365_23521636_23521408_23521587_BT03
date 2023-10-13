#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float a[], int& n);
void Xuat(float a[], int n);
float TichDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhNhan(float [], int );

int main()
{
	int k;
	float b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Trung binh nhan: ";
	cout << TrungBinhNhan(b, k);
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

float TichDuong(float a[], int n)
{
	float T = 1;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			T = T * a[i];
	return T;
}

int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}

float TrungBinhNhan(float a[], int n)
{
	float T = TichDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return pow(T, (float)1 / dem);
}
