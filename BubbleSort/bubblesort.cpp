#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;  // Break if the array is already sorted
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    bubbleSort(arr, n);  

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  
    }

    return 0;
}
