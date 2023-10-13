#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int ViTriLonNhat(int[], int);
int TimChuSo(int[], int);
void Xuat(int[], int);

int main()
{
	int n;
	int a[200];
	Nhap(a, n);
	Xuat(a, n);
	cout << "Chu so xuat hien nhieu nhat trong mang la:  " << TimChuSo(a, n);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100);
	}
}
int ViTriLonNhat(int a[], int k)
{
	int lc = 0;
	for (int i=0; i < k; i++)
	{
		if (a[i] > a[lc])
			lc = i;
	}
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
	return ViTriLonNhat(dem, 10);
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
