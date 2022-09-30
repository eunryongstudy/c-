#include<iostream>
#include<algorithm>
using namespace std;
int	main()
{
	long	N;
	long	div[50];
	cin >> N;
	if (N == 1)
	{
		cin>>div[0];
		cout<<div[0]*div[0];
		return 0;
	}
	for(int	i = 0; i < N; i++)
		cin>>div[i];
	sort(div, div+N);
	cout<< div[0] * div[N-1];
}
