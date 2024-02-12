// binarySearch.cpp

#include <iostream>
#define MAX 100
using namespace std;

int binarySearchRecur(int arr[], int l, int r, int k)
{
	if (r >= l)
	{
		int m = l + (r - l) / 2;
		if (arr[m] == k)
			return m;

		if (arr[m] > k)
			return binarySearchRecur(arr, l, m - 1, k);

		return binarySearchRecur(arr, m + 1, r, k);
	}

	return -1;
}
void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// Swap arr[j] and arr[j+1]
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(void)
{
	int arr[MAX], n, k;
	cout << "This is recursive binary search \n";
	cout << "Enter Array Size : ";
	cin >> n;
	cout << "Enter Array Elements : " << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	bubbleSort(arr, n);
	cout << "Enter key to be searched : ";
	cin >> k;
	int result = binarySearchRecur(arr, 0, n - 1, k);
	for (int i = 0; i < n; i++)
		cout << arr[i];
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}