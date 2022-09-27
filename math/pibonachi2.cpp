#include<iostream>
using namespace std;
long	pibonachi(int	n)
{
	static long int pibo[91];
	if(pibo[n] != 0)
		return pibo[n];
	else if(n <= 0)
		return 0;
	else if(n == 1)
		return 1;
	else
	pibo[n] = pibonachi(n - 1) + pibonachi(n - 2);
	return pibo[n];
}
int	main()
{
	int	n;
	cin >> n;
	cout << pibonachi(n);
}
