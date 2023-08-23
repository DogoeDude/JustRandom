#include <iostream>
using namespace std;

int binarySearch(int* array1, int targetNum, int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array1[mid] == targetNum) {
            return mid; // Return the index of the targetNum if found
        }

        if (array1[mid] < targetNum) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Return -1 to indicate targetNum not found
}

int main() {
    int targetNum = 9;
    int arr1[8] = {1, 4, 6, 8, 4, 32, 9, 76};
    int sizeofArr = sizeof(arr1) / sizeof(arr1[0]);

    int resultIndex = binarySearch(arr1, targetNum, sizeofArr);

    if (resultIndex != -1) {
        cout << "Target number found at index: " << resultIndex << endl;
    } else {
        cout << "Target number not found in the array." << endl;
    }

    return 0;
}
