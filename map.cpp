#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;


int main()
{

    // creating a map
    unordered_map<string, int> m;

    // inserting elements
    // approch -1
    m["apple"] = 10;

    // aprrocal -2
    pair<string, int> p = make_pair("banana", 10);
    m.insert(p);

    // approach -3
    m.insert({"orange", 20});

    // approach -4
    pair<string, int> q("orange", 20);
    m.insert(q);

    // Search
    cout << "Search orange: " << m["orange"] << endl;
    cout << "Search banana: " << m.at("banana") << endl;
    // cout << "Search unknown: " << m.at("unknown") << endl;//It will print error
    cout << "Search unknown : " << m["unknown"] << endl;

    // Check size of the map
    cout << "Size of the map is :" << m.size() << endl;

    // check present or not
    cout << " Bro is : " << m.count("bro") << endl;

    //erase an existing entry
    m.erase("orange");


    // traverse 
    //approch 1
    for (auto i : m)
    {
        cout << i.first << " = " << i.second << endl;
    }

    //approch 2(iterator)
    unordered_map<string, int>::iterator it = m.begin();
    for (it; it!=m.end(); ++it)
    {
        cout << it->first << " = " << it->second << endl;
    }
    return 0;
}