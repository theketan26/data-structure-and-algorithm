#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[] = {1, 2, 1, 3, 4, 2, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n - 1; i ++) {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }
    cout << arr[n - 1];

    return 0;
}