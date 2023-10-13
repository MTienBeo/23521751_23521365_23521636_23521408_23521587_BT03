#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongGiaTri(float[], int, float);
int DemGiaTri(float[], int, float);
float TrungBinhCong(float[], int, float);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

float TongGiaTri(float a[], int n, float x)
{
	float s = 0;
	for (int i = 0;i < n;i++)
		if (a[i] > x)
			s = s + a[i];
	return s;
}

int DemGiaTri(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			dem++;
	return dem;
}

float TrungBinhCong(float a[], int n, float x)
{
	float s = TongGiaTri(a, n, x);
	int dem = DemGiaTri(a, n, x);
	if (dem == 0)
		return 0;
	return s/dem;
}