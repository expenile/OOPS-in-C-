#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    // run the steps n-1 times
    bool swapped;
    for (int i = 0; i < n ; i++)
    {
        swapped = false;
        // for each step max item will come at the last respective index
        for (int j = 1; j < n - i; j++) // <= arr.size() - i - 1
        {
            // swap if the item is smaller than the previous item
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                swapped = true;
            }
        }
        // if you did not swap for a particular value of i, it means the array is sorted hence stop the program
        if (!swapped)
        {
            break;
        }
    }
}


void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            // Find the index of the minimum element in the unsorted part
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        if (min_index != i) {
            swap(arr[i], arr[min_index]);
        }
    }
}


int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    // bubble_sort(arr, n);
    selection_sort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}