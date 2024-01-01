#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;

    for (int i = 0; i < n; i ++ ) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int rotate = 2;
    int new_arr[n];
    for (int i = 0; i < n; i ++) {
        new_arr[i] = arr[n - 1 - i];
    }
    for (int i = 0; i < n - rotate + 1; i ++) {
        arr[i] = new_arr[n - rotate - i - 1];
    }
    for (int i = 0; i < rotate; i ++) {
        arr[rotate + i] = new_arr[n - i - 1];
    }

    for (int i = 0; i < n; i ++ ) {
        cout << arr[i] << " ";
    }

    return 0;
}