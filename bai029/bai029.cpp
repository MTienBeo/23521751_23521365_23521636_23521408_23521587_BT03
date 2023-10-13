#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChanDau(int[], int);
int ChanLonNhat(int[], int);
void LietKe(int[], int);

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

int ChanDau(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}

int ChanLonNhat(int a[], int n)
{
	int lc = ChanDau(a, n);
	if (lc == -1);
	    return -1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0 && a[i] > lc)
			lc = a[i];
	return lc;
}

void LietKe(int a[], int n)
{
	int dd = ChanLonNhat(a, n);
	if (dd == -1)
	{
		cout << "\nKhong co chan";
		return;
	}
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == dd)
			cout << i;
}