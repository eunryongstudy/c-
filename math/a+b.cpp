#include<iostream>
using namespace std;
string s1, s2, temp;
int	num1[10001],num2[10001];
int	ans[10001] = { 0 };
int	main()
{
	int	sum;
	cin >> s1 >> s2;
	if(s1.size() < s2.size())
	{
		temp = s1;
		s1 = s2;
		s2 = temp;
	}
	for(int	i = 0; i < s1.size(); i++)
		num1[i + 1] = s1[i] - '0';
	for(int	i = 0; i < s2.size(); i++)
		num2[i + 1 + (s1.size() - s2.size())] = s2[i] - '0';
	for(int	i = s1.size(); i > 0; i--)
	{
		sum = num1[i] + num2[i];
		if(sum >= 10)
		{
			num1[i - 1]++;
			sum -= 10;
		}
		ans[i] = sum;
	}
	if (num1[0] != 0)
		ans[0] = 1;
	for(int	i = 0; i <= s1.size();i++){
		if(i == 0 && ans[0] == 0)continue;
		cout << ans[i];
	}
}			
