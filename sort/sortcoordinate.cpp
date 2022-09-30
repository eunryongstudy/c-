#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int	main()
{
	int	N, tmp;
	vector <int> x1;
	vector <int> x2;

	cin >> N;
	for(int	i = 0; i < N; i++)
	{
		cin>>tmp;
		x1.push_back(tmp);
		x2.push_back(tmp);
	}
	sort(x1.begin(), x1.end());
	x1.erase(unique(x1.begin(), x1.end()), x1.end());
	for(int	i= 0 ; i < N; i++)
		cout << lower_bound(x1.begin(), x1.end(), x2[i]) -x1.begin() << " ";
}


