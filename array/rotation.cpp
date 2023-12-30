#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;
    int new_arr[n];

    int rotate = 2;
    for (int i = rotate; i < n; i ++) 
        new_arr[i - rotate] = arr[i];
    for (int i = 0; i < rotate; i ++)
        new_arr[i + rotate + 1] = arr[i];

    for (int i = 0; i < n; i ++)
        cout << arr[i] << " ";
    cout << endl;
    for (int i = 0; i < n ;i ++)
        cout << new_arr[i] << " ";

    return 0;
}