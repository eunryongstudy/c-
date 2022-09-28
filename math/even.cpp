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
	int	T,N;
	cin >> T;
	for(int	i = 0; i < T; i++)
	{
		cin >> N;
		for(int	j = N / 2; j > 2; j--)
		{
			if(prime(j) && prime(N - j))
			{
				cout << j << ' ' << (N - j)<< endl;
				break;
			}
		}
	}
}
