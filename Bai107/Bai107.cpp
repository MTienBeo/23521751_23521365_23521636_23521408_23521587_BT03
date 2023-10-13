#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
void TimGiaTri(int[], int);
void Xuat(int[], int);

int main()
{
	int a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	TimGiaTri(a, n);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200);
	}
}
int TanSuat(int a[], int n, int k)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == k)
			dem++;
		
	}
	return dem++;
}
void TimGiaTri(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (TanSuat(a, n, a[i]) > TanSuat(a, n, lc))
			lc = a[i];
	}
	if (TanSuat(a, n, lc) == 1)
		cout << "Khong co gia tri lap lai";
	else
		cout <<  "Gia tri co so lan xuat hien nhieu nhat trong mang so nguyen la: "<< lc;
}
void Xuat(int a[], int n)
{
	cout << "Cac gia tri trong mang la: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << setprecision(4) << a[i];
	}
	cout << endl;
}
