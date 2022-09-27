#include<iostream>
using namespace std;
int	div_(int n1, int n2)
{
	int	r, temp, res = 1;
	if (n1 < n2)
	{
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	r = n1 % n2;
	for(int	i = 2; i <= n2; i++)
	{
		if(r % i == 0 && n2 % i == 0)
			res = i;
	}
	return res;
}

int	main()
{
	int	T,n1,n2, cmul, cdiv;
	cin >> T;
	for(int	i = 0; i < T; i++)
	{
		cin>>n1>>n2;
		cdiv = div_(n1,n2);
		cmul = cdiv * (n1 / cdiv) * (n2/cdiv);
		cout << cmul<< endl;
	}
}

