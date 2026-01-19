#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {26, 25, 30, 76, 50, 8, 12};

    for (auto it = begin(arr); it != end(arr); it++) {
        cout << *it << " ";
    }
    cout << endl;

    auto minIt = min_element(begin(arr), end(arr));
    cout << *minIt << endl;

    return 0;
}
