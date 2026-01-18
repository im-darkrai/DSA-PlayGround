#include<bits/stdc++.h>
using namespace std; 

int main(){
    list<int>l;
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);
    l.push_back(60);
    l.push_front(10);
    cout<<l.front()<<" "<<l.back()<<endl;

}