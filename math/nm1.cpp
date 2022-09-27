#include<iostream>
using namespace std;
bool c[10];
int arr[10];
void	nm(int	index, int n, int m)
{
	if(index == m){
		for(int	j = 0; j < m; j++)
		{
			cout << arr[j];
			if(j != m-1) cout << ' ';
		}
		cout << '\n';
		return;
	}
	for(int	i = 1; i <= n; i++){
		if (c[i]) continue;
		c[i] = true;
	       	arr[index] = i;
		nm(index + 1, n, m);
		c[i] = false;
	}
			
}

int	main()
{
	int n, m;
	cin >> n >> m;
	nm(0, n, m);
}
