#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool compare(pair<int, string> a, pair<int,string> b)
{
	return a.first < b.first;
}
int	main()
{
	vector<pair <int, string> > an;
	pair<int, string> tmp;
	int	N;
	cin >> N;
	for(int	i = 0; i < N; i++)
	{
		cin >> tmp.first >> tmp.second;
		an.push_back(tmp);
	}
	stable_sort(an.begin(), an.end(),compare);
	for(int	i = 0; i < N; i++)
		cout << an[i].first << ' '<< an[i].second << endl;
}
