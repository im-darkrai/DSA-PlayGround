1.0 Topic--> Pair

pair<string, int>p;
p = make_pair("Mukund", 23); First Way

p = make_pair("Mukund" make_pair(23,80)) Second Way

pair<string, pair<int,int> >p; Third Way
p.first = "Mukund";
p.second.first= 23;
p.second.second = 67;

2.0 Topic --> List

list = Doubly Linked List (non-continuous memory)

👉 Har element ke paas:
data
prev pointer
next pointer

| Feature                | list              | vector                     |
| ---------------------- | ----------------- | -------------------------- |
| Memory                 | Non-contiguous    | Contiguous                 |
| Access                 | ❌ slow (no index) | ✅ fast                     |
| Insert/Delete (middle) | ✅ fast            | ❌ slow                     |
| Sorting                | Built-in `sort()` | `sort(v.begin(), v.end())` |


Create Or Insert Operation on List

list<int> l;

l.push_back(20);
l.push_back(30);
l.push_front(10);

Acessing It
cout << l.front();  // 10
cout << l.back();   // 30

For size
cout << l.size();     // number of elements
cout << l.empty();   // true / false

For Remove Specific Value 
10 20 20 30 → remove(20)
Result → 10 30


For Clear Full List 
l.clear();

