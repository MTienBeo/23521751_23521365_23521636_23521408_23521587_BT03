#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
float TrungBinh(float[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

float TrungBinh(float a[], int n)
{
	float s = 0;
	int dem = 0;
	for(int i=0; i<n; i++)
		for(int j=0; j<n: j++)
			if (i != j)
			{
				s = s + abs(a[i] - a[j]);
				dem++;
			}
	if (dem == 0)
		return 0;
	return s / dem;
}