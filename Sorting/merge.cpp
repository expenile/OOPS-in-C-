// divide and merge
 
#include <bits/stdc++.h>
using namespace std;

void merge_sort(int arr[] ,int low, int high){
    if(low<high){
        int mid = low + (high - low)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge_sort(arr,low,mid,high);
    }


}