#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&, string);
void Xuat(int[], int);

int main()
{
	int b[500];
	int k;
	string fileName = "intdata.inp";

	Nhap(b, k, fileName);
	cout << "Mang cac so nguyen: ";
	Xuat(b, k);

	return 0;
}

void Nhap(int a[], int& n, string fileName)
{
	ifstream fi(fileName);
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}