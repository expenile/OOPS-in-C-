#include <iostream>
#include <vector>
#include <algorithm>

// Function to print duplicates from two arrays
void printDuplicates(std::vector<int>& arr1, std::vector<int>& arr2) {
    // Sort both arrays
    std::sort(arr1.begin(), arr1.end());
    std::sort(arr2.begin(), arr2.end());

    int i = 0, j = 0;
    std::cout << "Duplicates: ";

    // Use two pointers to find common elements
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            std::cout << arr1[i] << " ";
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {3, 4, 5, 6, 7};

    printDuplicates(arr1, arr2);

    return 0;
}
