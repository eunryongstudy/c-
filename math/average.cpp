#include<iostream>
using namespace std;
int	main()
{
	int s[5], avr = 0;
	for(int	i = 0; i < 5; i++)
	{
		cin >> s[i];
		if (s[i] < 40)
			s[i] = 40;
		avr += s[i] / 5;
	}
	cout << avr;
}
