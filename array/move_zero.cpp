#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[] = {1, 2, 0, 3, 0, 4, 5}, n = 7;
    int new_arr[n];

    int num_0 = 0;
    for (int i = 0; i < n; i ++) {
        if (arr[i] == 0) {
            num_0 ++;
        } else {
            new_arr[i - num_0] = arr[i];
        }
    }
    for (int i = n - num_0; i < n; i ++) {
        new_arr[i] = 0;
    }

    for (int i = 0; i < n; i ++)
        cout << arr[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i ++)
        cout << new_arr[i] << " ";

    return 0;
}