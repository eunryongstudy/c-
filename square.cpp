#include<iostream>
using namespace std;
int	main()
{
	int x, y, w, h, resX, resY, res;
	cin >> x>>y>>w>>h;
	resX = w - x <= x ? w - x : x;
	resY = h - y <= y ? h - y : y;
	res = resX <= resY ? resX : rseY;
	cout << res;
}


