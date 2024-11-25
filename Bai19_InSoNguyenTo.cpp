#include <iostream>
using namespace std;
int main()
{
	int so;
	cout << "nhap so: "; cin >> so;
	int dem = 0;
	for (int m = 1; m <= so; m++)
	{
		dem = 0;
		for (int i = 1; i <= so; i++)
		{
			if (m % i == 0)
			{
				dem++;
			}
		}
		if (dem==2)
		{
			cout << m << " ";
		}
		
	}
	return 0;
}





