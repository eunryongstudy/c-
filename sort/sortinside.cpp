#include<iostream>
#include<string>
using namespace std;
int	main()
{
	string s;
	cin >>s;
	int	len;
	len = s.length();
	int	n[len], temp;
	for(int	i = 0; i < len;i++)
		n[i] = s[i] - '0';
	for(int	i = 0; i < len;i++)
	{
		for(int	j = i + 1; j <len; j++)
		{
			if(n[i] < n[j])
			{
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	for(int	i = 0; i < len; i++)
		cout<<n[i];
}
		
