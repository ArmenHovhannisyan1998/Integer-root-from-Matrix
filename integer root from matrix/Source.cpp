#include <iostream>
#include <random>
#include <cmath>
using namespace std;

int Input(int **arr, int n);
void Calc(int **arr, int n, int *_arr);
void Out(int **arr, int n, int *_arr, int temp);
int main()
{
	int n;
	cin >> n;
	int **arr = new int *[n];
	int temp = Input(arr, n);
	int *_arr = new int[temp];
	Calc(arr, n, _arr);
	Out(arr, n, _arr, temp);
	
	
	cout << endl;
	system("PAUSE");
	return 0;
}
int Input(int **arr, int n)
{
	int temp = 0;

	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = random_device()() % 40 + 10;

			double a = sqrt(arr[i][j]);
			if (arr[i][j] / a == (int)a)
			{
				temp++;
			}
		}

	}
	return temp;
}
void Calc(int **arr, int n, int *_arr)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			double a = sqrt(arr[i][j]);
			if (arr[i][j] / a == (int)a)
			{
				_arr[k++] = arr[i][j];
			}
		}
	}
}
void Out(int **arr, int n, int *_arr, int temp)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < temp; i++)
	{
		cout << _arr[i] << " ";
	}

}