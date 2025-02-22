#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	int t;
	cin >> t;

	string str1, str2;
	
	for (int i = 0; i < t; i++)
	{
		cin >> str1 >> str2;

		int size;
		if (str1.size() < str2.size()) size = str1.size();
		else size = str2.size();

		for (int i = 0; i < size; i++)
		{
			cout << str1[i] << str2[i];
		}

		cout << endl;
	}
	return 0;
}