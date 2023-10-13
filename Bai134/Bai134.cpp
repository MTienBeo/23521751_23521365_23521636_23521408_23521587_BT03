#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
bool ktNguyenTo(int);
void XayDung(int[], int, int[], int&);

int main()
{
	int k, q;
	int b[500];
	int a[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Mang xay dung: ";
	XayDung(b, k, a, q);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (200.0)));
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i=0; i<n;i++)
		if (ktNguyenTo(a[i]))
		{
			b[k] = a[i];
			k++;
		}
	Xuat(b, k);
}