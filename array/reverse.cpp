#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;

    int new_arr[n];
    for (int i = 0; i < n; i ++) {
        new_arr[n - 1 - i] = arr[i];
    }

    for (int i = 0; i < n; i ++)
        cout << arr[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i ++)
        cout << new_arr[i] << " ";

    return 0;
}