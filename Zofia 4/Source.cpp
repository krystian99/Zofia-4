#include <iostream>
#include <string>

using namespace std;

const int MAX = 256;

int tab[MAX]; // tablica wyzerowana

int main()
{
	string str;

	int t;

	cin >> t;
	cin.get();

	for (int i = 0; i < t; ++i)
	{
		getline(cin, str);

		for (int j = 0; j < str.size(); j++)
		{
			char c = str[j];
			tab[c]++;
		}

	}

	/*for (int i = 97; i <= 122; ++i)
	{
		if (tab[i] > 0)
			cout << char(i) << " " << tab[i] << endl;

	}*/

	for (char i = 'a'; i <= 'z'; ++i)
	{
		if (tab[i] > 0)	
			cout << i << " " << tab[i] << endl;

	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (tab[i] > 0)
			cout << i << " " << tab[i] << endl;
	}

	return 0;
}