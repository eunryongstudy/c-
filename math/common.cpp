#include<iostream>
using namespace std;
int	main()
{
	int	a, b, r;
	int	div = 1, mul;
	cin >> a>> b;
	r = a % b;
	for(int	i = 1; i <= r; i++)
	{
		if(b % i == 0 && r % i == 0 && div < i)
			div = i;
	}
	cout << div << '\n';
	mul = div * (a / div) * (b / div);
	cout << mul;
}
