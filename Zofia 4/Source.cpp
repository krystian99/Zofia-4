#include <iostream>

using namespace std;

const int MAX = 999999;

int main()
{
	int t;
	cin >> t;


	int g1, g2;
	//cin >> g1 >> g2;

	for (int j = 0; j < t; j++)
	{
		cin >> g1 >> g2;

		for (int i = 1; i < MAX; i++)
		{
			int x = i % g1;
			int y = i % g2;

			if (x == 0 && y == 0)
			{
				cout << i << endl;
				break;
			}
		}
	}
	

	return 0;
}