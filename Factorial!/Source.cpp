#include <iostream>
using namespace std;

int main()
{
	int x, y, z = 1;
	cout << "Enter a number to find out its factorial.\nNumber: ";
	cin >> x;
	y = x;

	while (x > 0)
	{
		z *= x--;
	}

	cout << y << "! = " << z << endl;

	system("pause");
}