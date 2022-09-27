#include<iostream>
#include <algorithm>
using namespace std;
bool c[10]; int a[10], num[10];

void nm(int index, int n, int m)
{
	if(index == m){
		for(int i = 0; i < m; i++)
		{
			cout << num[i];
			if(i != m - 1) cout << ' ';
		}
		cout << '\n';
		return;
	}
	for(int i = 1; i <= n; i++){
		if(num[index - 1] >= a[i])continue;
		c[i] = true;
		num[index] = a[i];
		nm(index + 1, n, m);
		c[i] = false;
	}
}


int	main(){
	int n, m;
	cin>> n >> m;
	for(int i = 1; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	nm(0, n, m);
}
