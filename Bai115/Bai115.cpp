#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float a[], int&);
void GanNhat(float[], int, float&, float&);
void Xuat(float a[], int, float, float);

int main()
{
	float a[200];
	int n;
	float x;
	float y;
	Nhap(a, n);
	GanNhat(a, n, x, y);
	Xuat(a, n, x, y);

}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand()/(RAND_MAX/(200.0));
	}
}
void GanNhat(float a[], int n, float& x, float& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			if ((abs(a[i] - a[j])) < (abs(x - y)))
			{
				x = a[i];
				y = a[j];
			}
		}
	}
}
void Xuat(float a[], int n, float x,float y)
{
	cout << "Cac gia tri trong mang la: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << setprecision(4) << a[i];
	}
	cout << endl;
	cout << "Cap so gan nhau nhat trong mang la: " << x << "  " << y;
}
