#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
int DemGiaTri(int[], int);
void Xuat(int[], int);

int main()
{
	int a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Dem so luong cac so nguyen lon hon tat ca cac gia tri dung dang truoc no" << endl;
	cout << "Gia tri tra ve: " << DemGiaTri(a, n);
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
int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[j] >= a[i])
				flag = 0;
		}
		if (flag == 1)
			dem++;
	}
	return dem++;
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