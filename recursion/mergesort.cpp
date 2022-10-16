#include<iostream>
#include<vector>
using namespace std;
int	main(){
	int	N, k, min;
	int	num[N];
	int	cnt = 1;
	cin >> N, k;
	for(int	i = 0; i < N; i++)
		cin >>num[i];
	min = num[0];
	for(int	i = 0; i < N; i++)
	{
		for(int	j = 0; j < N; j++)
		{
			if (min > num[i]){
				min = num[i];

