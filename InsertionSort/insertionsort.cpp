#include <iostream>
using namespace std;

void insertionSort(int n, int arr[]) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];  // Shift larger elements to the right
            } else {
                break;  // Exit the loop when the correct position is found
            }
        }
        arr[j + 1] = temp;  // Place the current element in its correct position
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

    insertionSort(n, arr);  

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  
    }

    return 0;
}
