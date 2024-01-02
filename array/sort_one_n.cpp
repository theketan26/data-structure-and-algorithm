#include <bits/stdc++.h>

using namespace std;


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void sort(int arr[], int n) {
    int i = 0;
    while (i < n) {
        int correct = arr[i] - 1;
        if (correct == i) {
            i ++;
        }
        else {
            swap(&arr[i], &arr[correct]);
        }
    }
}


int main() {
    int arr[] = {3, 2, 4, 1, 5}, n = 5;

    sort(arr, n);

    for (int i = 0; i < n; i ++) 
        cout << arr[i] << " ";

    return 0;
}