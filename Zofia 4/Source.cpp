#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	int t;
	cin >> t;

	int podstawa, wykladnik;
	
	for (int i = 0; i < t; i++)
	{
		cin >> podstawa >> wykladnik;

		int pot1j = podstawa%10;
		int pot2j = (podstawa * podstawa) % 10;
		int pot3j = (podstawa * podstawa*podstawa) % 10;
		int pot4j = (podstawa * podstawa * podstawa*podstawa) % 10;

		int tab[4] = { pot1j, pot2j, pot3j, pot4j };

		int reszta=wykladnik%4;


		cout << tab[reszta] << endl;
	}

	return 0;
}