#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    for(auto it = s.begin();it!=s.end();it++){
        cout<<*it<<" "; // First Way using Common idea For loop
    }
    for(auto x : s){  
        cout<<x<<" "; // Second Developer Way
    }
// Time Complexity Of set in log(n);
// Implementation By Using self balancing tree (Avial tree)

/*Operation On Set.

Operation	Syntax	Time Complexity
Create	set<int> s;	O(1)
Insert	s.insert(value);	O(log n)
Search	s.find(value);	O(log n)
Delete	s.erase(value);	O(log n)
Check Exists	s.count(value);	O(log n)
Size	s.size();	O(1)
Empty Check	s.empty();	O(1)
*/
}