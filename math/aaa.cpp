#include<iostream>
using namespace std;
int	num[6];
int	main()
{
	int	sum = 0;
	for(int	i = 0; i < 5; i++)
	{
		cin >> num[i];
		sum += num[i] * num[i];
	}
	cout << sum % 10;
}
	
