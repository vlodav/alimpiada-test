#include<iostream>
using namespace std;
int main()
{
	int N = 0, M = 0;
	cin >> N;
	cin >> M;
	int** arr = new int* [N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[M];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < M; i++)
	{
		int max = arr[0][i];
		for (int j = 0; j < N; j++)
		{
			if (max < arr[j][i])
			{
				max = arr[j][i];
			}
		}
		cout << max << endl;
	}
}