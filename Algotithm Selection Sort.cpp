#include <iostream>
#include <chrono> 
using namespace std;
using namespace std::chrono;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        
        
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
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
    
    selectionSort(arr, n);
    
    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "Sorted array: \n";
    printArray(arr, n);
    
    cout << "Time taken by Selection Sort: "
         << duration.count() << " microseconds" << endl;
    
    return 0;
}