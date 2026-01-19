#include<bits/stdc++.h>
using namespace std;

class Person {
public:  // ✅ Colon use karo, semicolon nahi
    int age;
    string name;
    
    // ✅ MUST for set: comparison operator
    bool operator<(const Person& other) const {
        // Age ke basis pe sort
        return age < other.age;
    }
};

int main() {
    set<Person> s;
    
    Person p1, p2, p3;
    
    // Assign values
    p1 = {25, "Alice"};
    p2 = {30, "Bob"};  
    p3 = {20, "Charlie"};
    
    // Insert into set (auto-sorted by age)
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    
    // Display (sorted: Charlie(20), Alice(25), Bob(30))
    for(const auto& person : s) {
        cout << person.name << " : " << person.age << endl;
    }
    
    return 0;
}