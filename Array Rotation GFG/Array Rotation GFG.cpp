// Array Rotation GFG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int j = 0; j < T; j++)
	{
		int N;

		cin >> N;
		int *temp = new int[N];
		int *arr = new int[N];

		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		int d;
		cin >> d;
		
		int r = d % N;
		int index = r;
		for (int i = 0; i < N-r; i++)
		{

			temp[i] = arr[index];
			index++;
		}
		index = 0;
		
		for (int i = N - r; i < N; i++)
		{
			temp[i] = arr[index];
			index++;
		}
		for (int i = 0; i < N; i++)
		{
			cout << temp[i] << " ";
		}
		cout << endl;
	}
}
