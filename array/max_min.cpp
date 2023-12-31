#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;

    int min = 0, max = n - 1, flag = true, new_arr[n];
    for (int i = 0; i < n; i ++) {
        if (flag) 
            new_arr[i] = arr[max --];
        else 
            new_arr[i] = arr[min ++];
        flag = !flag;
    }

    for (int i = 0; i < n; i ++) 
        cout << arr[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i ++) 
        cout << new_arr[i] << " ";

    return 0;
}