#include <iostream>
#include <vector>

using namespace std;

void mergeInPlace(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i = m - 1; // Last index of the first array (considering its initial elements)
    int j = n - 1; // Last index of the second array
    int k = m + n - 1; // Last index of the merged array in arr1

    // Merge the two arrays from the end to the beginning
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    // Copy remaining elements of arr2 if any
    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}

void printArray(const vector<int>& array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {1, 5, 9, 10, 15, 20, 0, 0, 0, 0}; // Extra space for arr2
    vector<int> arr2 = {2, 3, 8, 13};
    int m = 6; // Number of initial elements in arr1
    int n = 4; // Number of elements in arr2

    cout << "Before merging:" << endl;
    printArray(arr1, m);
    printArray(arr2, n);

    mergeInPlace(arr1, arr2, m, n);

    cout << "After merging:" << endl;
    printArray(arr1, m + n);

    return 0;
}
