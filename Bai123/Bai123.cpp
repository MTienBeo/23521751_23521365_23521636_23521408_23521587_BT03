#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktDoiXung(int[], int);
void Xuat(int[], int);

int main()
{
	int a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Kiem Tra Doi Xung" << endl;
	cout << "Gia tri tra ve: " << ktDoiXung(a, n);
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
bool ktDoiXung(int a[], int n)
{
	int flag = 1;
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		if (a[d] != a[c])
			flag = 0;
		d++;
		c--;
	}
	return flag;
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