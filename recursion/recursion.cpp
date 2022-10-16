#include<iostream>
#include<string>
using namespace std;

int	main()
{
	int t;
	cin >> t;

	for(int	i = 0; i < t; i++)
	{
		string s;
		cin >> s;

		int cnt = 0;
		int r = s.length() - 1;
		bool flag = true;

		for(int	l = 0; l <= r; l++, r--)
		{
			cnt++;
			if(s[l] != s[r])
			{
				flag = false;
				break;
			}
		}
		cout << (flag ? 1:0)<< " "<< (flag && s.length() % 2 == 0 ? cnt+1 : cnt ) << endl;
	}
}
