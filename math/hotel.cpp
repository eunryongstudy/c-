#include<iostream>
using namespace std;
int	main()
{
	int	t;
	cin >> t;
	int	H, W, N;
	for(int	i = 0; i < t; i++)
	{
		cin>> H >> W >> N;
		Y = N % H;
		X = N / H;
		if(Y > 0)
			X++;
		else
			Y = H;
		cout << Y * 100 + X << '\n';
	}
}
