#include<iostream>
using namespace std;

bool prime(int n)
{
    if (n <=1)
        return false;
	for(int	i = 2; i <= n / i; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}
int	main()
{
	int	n, count = 0;
	cin >> n;
	int	num;
	for(int	i = 0; i < n; i++)
	{
		cin >> num;
		if(prime(num))
			count++;
	}
	cout << count;
}
