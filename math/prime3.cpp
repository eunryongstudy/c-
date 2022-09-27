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
	int	M, N, sum = 0, flag = 0, num;
	cin >> M >> N;
	for(int	i = M; i <= N; i++)
	{
		if(prime(i) && flag == 0)
		{
			num = i;
			flag = 1;
		}
		if(prime(i))
			sum += i;
	}
	if (flag == 0)
		cout << -1;
	else
		cout << sum << '\n' << num;
}

