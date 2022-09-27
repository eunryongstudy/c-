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
	int	N;
	while(1){
		cin>> N;
		if(N == 0)
			break;
		int count = 0;
		for(int	j = N + 1; j <= 2 * N;j++)
		{
			if(prime(j))
				count++;
		}
		cout << count << endl;
	}
}

