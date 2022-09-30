#include<iostream>
#include<algorithm>
using namespace std;
int	main()
{
	int	N;
	cin >> N;
	int	x[N],y[N];
	for(int	i = 0; i < N; i++)
		cin >> x[i] >> y[i];
	for(int	i = 0; i < N; i++){
		for(int	j = i + 1; j < N; j++){
			if(x[i] > x[j])
			{
				swap(x[i],x[j]);
				swap(y[i],y[j]);
			}
			else if(x[i] == x[j] && y[i] > y[j])
			{
				swap(x[i],x[j]);
				swap(y[i],y[j]);
			}
		}
	}
	for(int	i = 0; i < N; i++)
		cout << x[i] << " " << y[i] << endl;
}
