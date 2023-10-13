#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
bool ktDang5m(int);
int DauTien(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int k;
	int b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Gia tri lon nhat co dang 5m la: ";
	cout << TimGiaTri(b, k);
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

bool ktDang5m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = false;
		t /= 5;
	}
	return flag;
}

int DauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang5m(a[i]))
			return a[i];
	return 0;
}

int TimGiaTri(int a[], int n)
{
	int lc = DauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktDang5m(a[i]) && a[i] > lc)
			lc = a[i];
	return lc;
}