#include<iostream>
using namespace std;
int	padoban(int N)
{
	if(N <= 3)
		return 1;
	else
		return(padoban(N - 2) + padoban(N - 3));
}
int	main()
{
	int	T, N;
	cin >> T;
	for(int	i = 0; i < T; i ++)
	{
		cin >> N;
		cout << padoban(N) << endl;
	}
}
