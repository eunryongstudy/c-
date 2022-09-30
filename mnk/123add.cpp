#include<iostream>
using namespace std;
int	t, n;

int	go(int cnt, int sum, int goal){
	if(sum > goal) return 0;
	if(sum == goal) return 1;
	int now = 0;
	for(int	i = 1; i <= 3; i++)
	{
		now += go(cnt + 1, sum + i, n);
	}
	return now;
}

int	main()
{
	int	count;
	cin >> t;
	for(int	i = 0; i < t; i++){
		cin >> n;
		cout << go(0, 0, n) << endl;
	}
}

