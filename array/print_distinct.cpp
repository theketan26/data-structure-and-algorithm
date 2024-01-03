#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[] = {1, 2, 3, 3, 4, 4, 5}, n = 7;

    unordered_set<int> set;

    for (int i = 0; i < 7; i ++) {
        if (!set.count(arr[i])) {
            set.insert(arr[i]);
            cout << arr[i] << " ";
        }
    }

    return 0;
}