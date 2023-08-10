#include <bits/stdc++.h>
using namespace std;

void ArraySum(int arr[], int n, int sum)
{
	for (int i = 0; i < n; i++) {
		int currentSum = arr[i];
		if (currentSum == sum) {
			cout << "Sum found at indexes " << i << endl;
			return;
		}
		else {
			for (int j = i + 1; j < n; j++) {
				currentSum += arr[j];
				if (currentSum == sum) {
					cout << "Sum found between indexes =  "
						<< i << " and " << j << endl;
					return;
				}
			}
		}
	}
	cout << "There is No Subarray";
	return;
}

int main()
{
	int arr[] = { 32,54,15,18,45,65,22 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 54;
	ArraySum(arr, n, sum);
	return 0;
}
