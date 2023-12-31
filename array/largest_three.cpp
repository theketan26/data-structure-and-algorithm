#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;

    int l1 = arr[0], l2 = arr[1], l3 = arr[2];
    for (int i = 3; i < n; i ++) {
        if (l1 < l2 && l1 < l3) {
            if (l1 < arr[i]) 
                l1 = arr[i];
        }
        else if (l2 < l1 && l2 < l3) {
            if (l2 < arr[i])
                l2 = arr[i];
        }
        else 
            if (l3 < arr[i])
                l3 = arr[i];
    }

    for (int i = 0; i < n; i ++)
        cout << arr[i] << " ";
    cout << endl << l1 << " " << l2 << " " << l3;

    return 0;
} 