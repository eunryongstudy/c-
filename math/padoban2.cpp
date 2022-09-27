#include<iostream>
using namespace std;
long	padoban(int N)
{
	static long int pado[101];
    if(pado[N] != 0)
        return pado[N];
    else if(N <= 3)
	return 1;
    else if(N > 3)
        pado[N] = padoban(N - 2) + padoban(N - 3);
    return pado[N];
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
