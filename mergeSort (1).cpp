// mergeSort.cpp 

#include <iostream> 
#define MAX 100
using namespace std;
void merge(int arr[], int beg, int mid, int end);
void mergeSort(int arr[], int beg, int end);
void display(int arr[], int n);
int main()
{
    int arr[MAX], n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Before sorting array is : " << endl;
    display(arr, n);
    mergeSort(arr, 0, n - 1);
    cout << "\nThe sorted array is :" << endl;
    display(arr, n);
    return 0;
}
void merge(int arr[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[MAX], RightArray[MAX];

    for (int i = 0; i < n1; i++)
        LeftArray[i] = arr[beg + i];
    for (int j = 0; j < n2; j++)
        RightArray[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = beg;

    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
            arr[k++] = LeftArray[i++];
        else
            arr[k++] = RightArray[j++];

    }
    while (i < n1)
        arr[k++] = LeftArray[i++];
    while (j < n2)
        arr[k++] = RightArray[j++];

}

void mergeSort(int arr[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;  
        mergeSort(arr, beg, mid);  
        mergeSort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}

void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";
}