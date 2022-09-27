#include<iostream>
using namespace std;
int	pibonachi(int	n)
{
	if(n <= 0)
		return 0;
	if(n == 1)
		return 1;
	return(pibonachi(n - 1) + pibonachi(n - 2));
}
int	main()
{
	int	n;
	cin >> n;
	cout << pibonachi(n);
}
