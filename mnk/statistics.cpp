#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int	cnt[8001];
int	main()
{
	int	N, sum = 0, avr, cen, mode, most = 0;
	bool	second = false;
	cin>>N;
	int	num[N];
	for(int	i = 0; i < N; i++)
	{
		cin >> num[i];
		cnt[num[i] + 4000] += 1;
		sum += num[i];
		if(cnt[num[i] + 4000] > most)
			most = cnt[num[i] + 4000];
	}
	for(int	i = -4000 ; i < 4001;i++)
	{
		if(cnt[i + 4000] == most)
		{
			mode = i;
			if(second)
				break;
			second = true;
		}
	}
	avr = floor((float)sum / N + 0.5);
	sort(num, num+N);
	cen = num[N/2];
	cout << avr << endl;
	cout << cen << endl;
	cout << mode << endl;
	cout << num[N-1] - num[0]<< endl;
}

