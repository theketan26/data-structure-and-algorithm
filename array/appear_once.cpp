#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 5, 5}, n = 8;

    unordered_set<int> set, once;
    for (int i = 0; i < n; i ++) {
        if (!set.count(arr[i])) {
            if (!once.count(arr[i])) {
                once.insert(arr[i]);
                set.insert(arr[i]);
            }
        } else {
            if (once.count(arr[i])) {
                once.erase(arr[i]);
            }
        }
    }

    for (auto i = once.begin(); i != once.end(); i ++) 
        cout << *i << " ";

    return 0;
}