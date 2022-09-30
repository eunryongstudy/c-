#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int	main()
{
	int	N;
	cin >> N;
	vector<vector <int> > num(N, vector<int>(2, 0));
	for(int	i = 0; i < N; i++){
		cin >>num[i][0];
		cin >>num[i][1];
	}
	sort(num.begin(), num.end());
	for(int	i = 0; i < N; i++)
		cout <<num[i][0]<< " "<<num[i][1]<< endl;
}
