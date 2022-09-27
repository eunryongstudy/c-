#include<iostream>
using namespace std;
int	main()
{
	int	x, y, z;
	while(1)
	{
		cin >> x>> y>> z;
		if(x == 0 && y == 0 && z == 0)
			break;
		else if(x == 0 || y == 0 || z == 0)
			cout << "wrong" << endl;
		else if(x * x + y * y == z * z)
		{
			cout << "right" << endl;
		}
		else
			cout << "wrong" << endl;
	}
}
