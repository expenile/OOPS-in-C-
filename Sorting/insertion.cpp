// takes an element and places it at its correct position


#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i  = 0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}


//tc O(n^2) - worst case and average case
//tc O(n) - best case