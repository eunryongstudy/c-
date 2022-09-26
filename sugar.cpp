#include<iostream>
using namespace std;
int	main()
{
	int	n, result = 0;
	cin >> n;
	for(int	i = 0; 3 * i <= n;i++)
	{
		for(int	j = 0; 5 * j <= n;j++)
		{
			if(5 * j + 3 * i == n)
			{
				cout << i + j;
				return 0;
			}
		}
	}
	cout << -1;
}

