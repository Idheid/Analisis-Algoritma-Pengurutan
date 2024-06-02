#include <iostream>
#include <chrono> 
using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
      
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
      
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    
    bubbleSort(arr, n);
    
    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "Sorted array: \n";
    printArray(arr, n);
    
    cout << "Time taken by Bubble Sort: "
         << duration.count() << " microseconds" << endl;
    
    return 0;
}
