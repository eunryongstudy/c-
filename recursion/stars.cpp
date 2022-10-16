#include<iostream>
#include<string>
#include<vector>
using namespace std;
void	go(int N,int num, int x)
{
	if(x == N || num == 0)
	{
		return ;
	}
	for(int	y = 0; y< N;y++)
	{
		if(x % 3 == 1 && y % 3 == 1)
			cout << " ";
		else if((x / num) % 3 == 1 && (y / num) % 3 == 1)
			cout << " ";
		else
		{
			if( num / 3 == 0)
				cout << "*";
			else
				go(N, num / 3, x);
		}
		if(y == N - 1)
			cout << endl;
	}
	go(N, num,x + 1);
}
int	main()
{
	int	N, num;
	cin >> N;
	num = N;
	go(N, num,0);
}
