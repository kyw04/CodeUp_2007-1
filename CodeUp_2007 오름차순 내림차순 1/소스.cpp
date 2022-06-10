#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, result = 0;
	cin >> n;

	vector<int> arr(n);
	for (auto& a : arr)
		cin >> a;

	for (int i = 0; i < n - 1; i++)
	{
		if (!result)
		{
			if (arr[i] < arr[i + 1])
				result = 1;
			else if (arr[i] > arr[i + 1])
				result = 2;
		}
		else if (result == 1)
		{
			if (arr[i] > arr[i + 1])
			{
				cout << "섞임";
				result = 0;
				break;
			}
		}
		else
		{
			if (arr[i] < arr[i + 1])
			{
				cout << "섞임";
				result = 0;
				break;
			}
		}
	}

	if (result == 1)
		cout << "오름차순";
	else if (result == 2)
		cout << "내림차순";
}