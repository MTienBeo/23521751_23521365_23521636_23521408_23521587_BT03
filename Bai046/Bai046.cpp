#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
bool ktNguyenTo(int);
int DemNguyenTo(int[], int);
int TongNguyenTo(int[], int);
float TrungBinhCong(int[], int);

int main()
{
	int k;
	int b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Trung binh cong: ";
	cout << TrungBinhCong(b, k);
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}

int DemNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			dem++;
	return dem;
}

int TongNguyenTo(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			s = s + a[i];
	return s;
}

float TrungBinhCong(int a[], int n)
{
	int s = TongNguyenTo(a, n);
	int dem = DemNguyenTo(a, n);
	if (dem == 0)
		return 0;
	return (float)s / dem;
}
