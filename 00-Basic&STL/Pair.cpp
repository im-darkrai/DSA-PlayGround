#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<string, int>p;
    //First Way
    p = make_pair("Mukund", 23);

    // cout<<p.first<<" "<<p.second<<endl;
    //Second Way
    pair<string, pair<int,int> >p;
    p.first = "Mukund";
    p.second.first= 23;
    p.second.second = 67;
    cout<<p.second.second<<endl;
}

