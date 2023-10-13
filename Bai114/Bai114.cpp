#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
int ViTriDuongDau(int[], int);
int ViTriDuongNhoNhat(int[], int);
int TimChuSo(int[], int);

int main()
{
	int k;
	int b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Gia tri: ";
	cout << TimChuSo(b, k);
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

int ViTriDuongDau(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0 )
			return i;
	return -1;
}
int ViTriDuongNhoNhat(int a[], int n)
{
	int lc = ViTriDuongDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0 && a[i] < a[lc])
			lc = i;
	return lc;
}

int TimChuSo(int a[], int n)
{
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			dem[0]++;
		int t = abs(a[i]);
		while (t != 0)
		{
			int dv = t % 10;
			dem[dv]++;
			t = t / 10;
		}
	}
	return ViTriDuongNhoNhat(dem, 10);
}