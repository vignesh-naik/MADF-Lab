// quickSort.cpp 

#include <iostream>
using namespace std;

const int MAX = 100;
int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (arr[start] <= pivot && start < end)
            start++;
        while (arr[end] > pivot)
            end--;
        if (start < end)
            swap(arr[start], arr[end]);
    }
    swap(arr[lb], arr[end]);
    return end;
}
void quickSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc - 1);
        quickSort(arr, loc + 1, ub);
    }
}
int main()
{
    int arr[MAX];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    quickSort(arr, 0, n - 1);
    cout << "The Sorted Array is : " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
}
