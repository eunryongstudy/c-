#include<iostream>
using namespace std;
int	main()
{
	string s;
	int	temp = 0,sum = 0, flag = 0;
	cin >> s;
	for(int	i = 0; i < s.size(); i++)
	{

		temp = 0;
		while(s[i] != '\0' &&s[i] != '+' && s[i] != '-')
		{
			temp = temp * 10 +s[i] - '0';
			i++;
		}
		if(s[i] == '+')
			sum += temp;
		else if(s[i] == '-' && flag == 0)
		{
			flag = 1;
			sum *= -1;
		}
		else if(s[i] == '-' && flag == 1)
		{
			flag = 0;
			sum *= -1;
		}
	}
	if (flag == 1)
		sum *= -1;
	cout << sum;
}
