#include <iostream>
using namespace std;
int main()
{
	int so;
	cout << "nhap so: "; cin >> so;
	cout << " cac so chia het cho 1: " << so << endl;
	for (int i = 1; i < so; i++)
	{
		if (i % so == 0)
			break;
		else if (so + i >= sqrt(i))
			cout << i << endl;
	}
	return 0;
}





