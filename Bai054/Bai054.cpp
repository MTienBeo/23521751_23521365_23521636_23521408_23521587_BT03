#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
bool ktDoiXung(int);
int DemDoiXung(int[], int);

int main()
{
	int k;
	int b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "So gia tri: ";
	cout << DemDoiXung(b, k);
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

bool ktDoiXung(int n) 
{
	int t = n;
	int dn = 0;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == n)
		return true;
	else
		return false;
}

int DemDoiXung(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDoiXung(a[i]))
			dem++;
	return dem;
}