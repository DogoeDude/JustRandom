#include <iostream>
using namespace std;

int LinearSearch(int a[], int b, int size){
    for(int i = 0; i < size; i++){
        if (b == a[i]){
            return i;
        }
    }
    return -1;
}

void increment(int& a){
    if (a > 10){
        while(a >= 10){
            a--;
        }
    }
    else{
        a++;
    }
}

int main() {
    int a = 11;
    int arr1[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int index = LinearSearch(arr1, a, size1);

    if(index != -1){
        cout<<"Number has been found at index: "<<index<<endl;
    }
    else{
        cout<<"Number not found "; 
    }
    
    increment(index);
    cout<<index;
    return 0;
}
