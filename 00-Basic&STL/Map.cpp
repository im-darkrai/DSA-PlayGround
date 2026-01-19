#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(20,50));
    m.insert(make_pair(60,70));
    
   for ( auto x : m){
    cout << x.first<<" "<<x.second; // -- Developer Way

   }
//    conventional Way
/*for (auto it = m.begin(); it!=m.end();it++){

cout <<(*it).firse
*/
}
