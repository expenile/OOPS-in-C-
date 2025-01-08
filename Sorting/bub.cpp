// push max element to the end by using adjacent swaps

// 0 - n-1
// 0 - n-2
// 0 - n-3
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    int didSwap = 0;
    for(int i  = n-1;i>=0;i--){
        for(int j = i;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}

// tc O(n^2) - worst case and average case
// tc O(n) - best case

 