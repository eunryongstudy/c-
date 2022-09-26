#include<iostream>
using namespace std;
int	main()
{
	long	num;
	int	a, b, c, count = 0, nbr[10];
	cin >>	a >> b >> c;
	num = a * b * c;
	for(int	i = 0; num > 0; i++)
	{
		nbr[num%10]++;
		num /= 10;
	}
	for(int	i = 0; i < 10; i++)
	{
		cout << nbr[i] << '\n';
	}
}
