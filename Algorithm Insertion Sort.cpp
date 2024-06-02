#include <iostream>
#include <chrono> 
using namespace std;
using namespace std::chrono;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
       
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {

    };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    auto start = high_resolution_clock::now();
    
    insertionSort(arr, n);
    
    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "Sorted array: \n";
    printArray(arr, n);
    
    cout << "Time taken by insertion Sort: "
         << duration.count() << " microseconds" << endl;
    
    return 0;
}