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
	int M, N;
	cin >> M >> N;
	while(M <= N)
	{
		if(prime(M))
			cout << M << '\n';
		M++;
	}
}
