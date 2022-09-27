#include<iostream>
using namespace std;
string day[] = { "SUN", "MON", "TUE", "WED" , "THU", "FRI", "SAT" };
int	month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int	main()
{
	int	x, y, date = 0;
	cin >> x >> y;
	for(int	i = 1; i < x; i++)
		date += month[i - 1];
	date += y + 2;
	date = (5+date)% 7;

	cout << day[date];
}
