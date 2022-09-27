#include<iostream>
using namespace std;
bool	c[30];
void	go(int index, int start, int N, int M, int *count)
{
	if(index == N)
		(*count)++;
	for(int	i = start; i <= M; i++)
	{
		if(c[i])continue;
		c[i] = true;
		go(index + 1, i, N, M, count);
		c[i] = false;
	}
}


int	main()
{
	int	T, N, M;
	cin >> T;
	for(int	i = 0; i < T; i++)
	{
		int count = 0;
		cin >> N >> M;
		go(0, 1, N, M, &count);
		cout << count << endl;
	}
}
