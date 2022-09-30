#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool	compare(string a, string b){
	if(a.length() == b.length())
	{
		for(int	i = 0; i < a.length();i++)
		{
			if(a[i] != b[i])
				return a[i] < b[i];
		}
	}
	return a.length() < b.length();
}
int	main(){
	int N;
	cin >> N;
	string temp;
	vector<string> s;
	for(int	i = 0; i < N; i ++)
	{
		cin >> temp;
		s.push_back(temp);
	}
	sort(s.begin(),s.end(), compare);
	cout << s[0] << endl;
	for(int	i = 1; i < N; i++)
	{
		if(s[i - 1] == s[i])
			continue;
		cout << s[i] <<endl;
	}
}
