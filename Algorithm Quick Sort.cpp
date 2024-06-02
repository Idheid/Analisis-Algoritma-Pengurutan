#include <iostream>
#include <chrono> 
using namespace std;
using namespace std::chrono;

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++) {
        
        if (arr[j] <= pivot) {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        
        int pi = partition(arr, low, high);

        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    
    quickSort(arr,0, n-1);
    
    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "Sorted array: \n";
    printArray(arr, n);
    
    cout << "Time taken by Quick Sort: "
         << duration.count() << " microseconds" << endl;
    
    return 0;
}