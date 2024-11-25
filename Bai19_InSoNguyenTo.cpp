#include <iostream>
using namespace std;
int main()
{
	/*
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
		return 0;
	}*/
	///
	/// ham kiem tra so nguyen to hay ko
	/// 
	/// so can kiem true
	/// true la so nguyen
	/// false ko phai so nguyen
	/// 


	bool kiemtraSNT(int s) {
		int dem = 0;
		for (int i = 1; i <= s; i++)
		{
			if (s % i == 0) {
				dem++;
			}
		}
		if (dem == 2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}



	bool kiemtraSCP(int x) {
		if (sqrt(x) == (int)sqrt(x)) return true;
		return false;
	}

	int main()
	{
		cout << " Kiem Tra Phai So Nguyen To khong\n";
		int so;
		cout << " Nhap So: "; cin >> so;
		for (int m = 1; m <= so; m++)
		{
			if (kiemtraSNT(m) == true) cout << m << " ";
		}

		cout << endl;

		for (int i = 1; i < 100; i++)
		{
			if (kiemtraSCP(i) == true) cout << i << " ";
		}
		return 0;
	}
}



