#include <iostream>
using namespace std;
int main()
{
	int so;
	int dem=0;
	cout << "nhap so: "; cin >> so;
	cout << " cac so chia het cho 1: " << so << endl;
	for (int i = 1; i <= so; i++)
	{
		if (so%i==0)
		{
			dem++;
		}
	}
	cout << "so dem= " << dem << endl;
	if (dem==2)
	{
		cout << "so: " << so << " la so nguyen to\n";
	}
	else
	{
		cout << "so: " << so << " khong phai so nguyen to\n";
	}
	return 0;
}





