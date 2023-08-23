#include <iostream>
using namespace std;

void swapFunction(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void SwapCounter(int arr[], int size){
    for(int i = 0 ; i < size - 1 ; i++){
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]){
                swapFunction(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int Bubbly[6] = { 6, 4, 5, 3, 2, 1};
    int size = sizeof(Bubbly) / sizeof(Bubbly[0]); // Calculate the size of the array
    SwapCounter(Bubbly, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << Bubbly[i] << " ";
    }

    return 0;
}
