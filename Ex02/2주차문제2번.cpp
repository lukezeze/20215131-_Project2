#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;

	for (a = 1; a <= 100; a++)
	{
		for (b = 1; b <= 100; b++)
		{
			for (c = 1; c <= 100; c++)
			{
				if ((a * a) + (b * b) == (c * c))
				{
					cout << a << "  " << b << "  " << c << endl;
				}
			}
		}
	}

	return 0;
}