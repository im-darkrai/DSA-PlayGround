/*Kya hai?

Linear Search = element ko start se end tak ek-ek karke check karna
Jab match mile → stop

🔹 Kab use karte hain?

Data unsorted ho

Array/List chhota ho

Simplicity chahiye

🔹 How it works (1 line)

Compare key with every element until found or array ends.*/


#include <bits/stdc++.h> 
using namespace std;

int main() {
    int arr[] = {26, 76, 73, 98, 100, 88, 16, 64, 8, 12};
    
    int target = 8;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << i << endl;
            break;   // element mil gaya, aage search ki zarurat nahi
        }
    }
    return 0;
}

