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
		int index = 0;
		int r = d % N;
		for (int i = r + 1; i < N; i++)
		{

			temp[i] = arr[index];
			index++;
		}
		//if (r == 0)
		//	break;
		for (int i = 0; i < r + 1; i++)
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
	//getchar();
}
