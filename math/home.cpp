#include<iostream>
using namespace std;
int	main()
{
	int	T, k, n, res;
	cin >> T;
	int	arr[15][15] = { 1 };
	for(int	i = 0; i < 14; i++)
		arr[0][i] += i;
	for(int	i = 0; i < 15; i++)
		arr[i][1] = 1;
	for(int	i = 1; i < 15; i++)
	{
		for(int	j = 2; j < 14; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}
	for(int	t = 0; t < T; t++)
	{
		cin >> k>> n;
		cout << arr[k][n] << '\n';
	}
}
