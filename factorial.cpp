#include<iostream>
using namespace std;
int	main()
{
	int	n, result = 1;
	cin >> n;
	if(n < 0 || n > 12)
		return 0;
	for(int	i = n;i > 1;i--)
	{
		result *= i;
	}
	cout << result;
}
