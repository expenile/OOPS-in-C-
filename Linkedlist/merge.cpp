#include <bits/stdc++.h>
using namespace std;

void mergeAndSortArrays(const vector<int>& array1, const vector<int>& array2, vector<int>& mergedArray) {
    // Step 1: Merge the arrays
    mergedArray = array1;
    mergedArray.insert(mergedArray.end(), array2.begin(), array2.end());

    // Step 2: Sort the merged array
    sort(mergedArray.begin(), mergedArray.end());
}

void printArray(const vector<int>& array) {
    for (int num : array) {
        cout << num << " ";
    }
    cout << std::endl;
}

int main() {
    vector<int> array1 = {5, 1, 9, 3};
    vector<int> array2 = {8, 6, 2, 7};
    vector<int> mergedArray;

    mergeAndSortArrays(array1, array2, mergedArray);

    cout << "Merged and sorted array: ";
    printArray(mergedArray);

    return 0;
}
