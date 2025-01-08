// select minimum and swap with first element
// select minimum from the rest and swap with second element
// and so on


// swap at index 0 and index (0 - n-1)
// swap at index 1 and index (1 - n-1)
// swap at index 2 and index (2 - n-1)
// and so on

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i <= n - 2 ; i++) {
        int min_index = i;
        for (int j = i ; j <= n-1; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(arr[i], arr[min_index]);
        }
    }
}

// tc O(n^2)
// sc O(1)
