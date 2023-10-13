#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float a[], int& n);
void Xuat(float a[], int n);
int DemCucDai(float[], int);
int DemCucTieu(float[], int);
int DemCucTri(float[], int);

int main()
{
	int k;
	float b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "So gia tri cuc tri: ";
	cout << DemCucTri(b, k);
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

int DemCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] > a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			dem++;
	if (a[n - 1] > a[n - 2])
		dem++;
	return dem;
}

int DemCucTieu(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] < a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			dem++;
	if (a[n - 1] < a[n - 2])
		dem++;
	return dem;
}

int DemCucTri(float a[], int n)
{
	int dem1 = DemCucDai(a, n);
	int dem2 = DemCucTieu(a, n);
	return (dem1 + dem2);
}