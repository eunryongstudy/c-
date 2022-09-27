#include<iostream>
#include<algorithm>

using namespace std;
int	main()
{
	int	N, a[50], b[50],sum = 0;
	cin >> N;
	for(int	i = 0; i < N; i++)
		cin >> a[i];
	for(int	i = 0; i < N; i++)
		cin >> b[i];
	int	check[N] = { 0 };
	sort(a, a + N);
	for(int i = 0; i < N; i++)
	{
		int	temp = 0;
		int	idx = 0;
		for(int	j = 0; j < N; j++)
		{
			if(temp < b[j] && check[j] == 0)
			{
				temp = b[j];
				idx = j;
			}
		}
		check[idx] = 1;
		sum += a[i] * temp;
	}
	cout<<sum;
}
