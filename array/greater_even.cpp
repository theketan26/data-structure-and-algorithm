#include <bits/stdc++.h>

using namespace std;


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;

    for (int i = 0; i < n; i ++) 
        cout << arr[i] << " ";
    cout << endl;

    for (int i = 1; i < n - 1; i += 2) {
        if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1]) {
            if (arr[i - 1] < arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
            } else {
                swap(&arr[i], &arr[i - 1]);
            }
        } else if (arr[i - 1] > arr[i]) {
            swap(&arr[i], &arr[i - 1]);
        } else if (arr[i + 1] > arr[i]) {
            swap(&arr[i], &arr[i + 1]);
        }
    }

    for (int i = 0; i < n; i ++) 
        cout << arr[i] << " ";

    return 0;
}