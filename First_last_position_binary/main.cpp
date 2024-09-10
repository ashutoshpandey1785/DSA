#include<bits/stdc++.h>
using namespace std;

int leftmost(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;  // Continue searching in the left half
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int rightmost(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;  // Continue searching in the right half
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

pair<int, int> firstandlast(int arr[], int n, int k) {
    pair<int, int> p;
    p.first = leftmost(arr, n, k);
    p.second = rightmost(arr, n, k);
    return p;
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the key to find: ";
    cin >> k;

    int arr[1000];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int, int> result = firstandlast(arr, n, k);

    
        cout << "Element is present between indices: " << result.first << " and " << result.second << endl;
    

    return 0;
}
