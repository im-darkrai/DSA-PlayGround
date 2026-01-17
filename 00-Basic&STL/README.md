Topic--> Pair

pair<string, int>p;
p = make_pair("Mukund", 23); First Way

p = make_pair("Mukund" make_pair(23,80)) Second Way

pair<string, pair<int,int> >p; Third Way
p.first = "Mukund";
p.second.first= 23;
p.second.second = 67;
