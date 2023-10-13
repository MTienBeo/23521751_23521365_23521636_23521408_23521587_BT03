#include<iostream>
using namespace std;
void Nhap(int[], int&);
bool ktNguyenTo(int);
int NguyenToDau(int[], int);
int Timgiatri(int[], int);
void Xuat(int[], int);

int main()
{
	int n;
	int a[200];
	Nhap(a, n);
	Xuat(a, n);
	cout << "So nguyen to lon nhat trong mang la: " << Timgiatri(a, n) << endl;

}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() / (RAND_MAX / 200);
	}
}
bool ktNguyenTo(int k)
{
	{
		int dem=0;
		for (int i = 1; i <= k; i++)
		{
			if (k % i == 0)
				dem++;
		}
		if (dem == 2)
			return true;
		
	}
	return false;
}
int NguyenToDau(int a[], int n)
{
	for (int i = 0 ; i < n; i++)
	{
		if (ktNguyenTo(a[i]))
			return a[i];
	}
	return 0;
}
int Timgiatri(int a[], int n)
{
	int lc = NguyenToDau(a, n);
	if (lc == 0)
		return 0;
	for (int i =0 ; i < n; i++)
	{
		if ((ktNguyenTo(a[i])) && (a[i]>lc))
			lc = a[i];
	}
	return lc;
}
void Xuat(int a[], int n)
{
	cout << "Cac gia tri trong mang la: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}