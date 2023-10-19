// ALL ABOUT STL

#include <iostream>

#include <array>     // stl array header file
#include <vector>    // stl vector header file
#include <deque>     // stl deque header file
#include <set>       // stl set header file
#include <map>       // stl map header file
#include <algorithm> // stl algorithm header file
using namespace std;

int main()
{
    /*

        int arr[] = {2, 3, 4, 56, 3}; // Normal array

        // ---- ARRAY IN STL ----
        // syntax: array<{{array datatype}},{{array size}}> {{array name }}= {{array elements}}
        array<int, 5> a = {2, 3, 4, 56, 3};

        cout << a.size() << endl; // size(), It is use to find the size of the array

        cout << "-------------" << endl;

        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << endl;  //stl array element itrate
        }

        cout << "-------------" << endl;

        cout<<"Element at 2nd index = "<<a.at(2)<<endl; //at() ,is use to find find a specific index element

        cout << "-------------" << endl;

        cout<<"Element is empty or not "<<a.empty()<<endl;// empty() , It is used to check array is empty or not ,it return a boolean value

        cout << "-------------" << endl;

        cout<<"First element is  : "<<a.front()<<endl;//front(), It return first element of the array

        cout << "-------------" << endl;

        cout << "First element is  : " << a.back() << endl; // back(), It return last element of the array

        cout << "-------------" << endl;

    */

    cout << "**************************************" << endl;

    /*
        cout << "-------------" << endl;
        // ----VECTOR IN STL----
        // syntax: vector<{{array datatype}}> {{vector name }};
        vector<int> v;
        vector<int> v1(4,1);//Here 4 is size of the vector and initialize 1

        cout << "Capacity of the vector " << v.capacity() << endl; // cpacity(),use to check capacity of the vector

        cout << "-------------" << endl;

        v.push_back(2); // push_back(),is used to insert a element to the vactor
        v.push_back(3); // push_back(),is used to insert a element to the vactor
        v.push_back(4); // push_back(),is used to insert a element to the vactor

        cout << " 0 index element " << v.at(0) << endl; // 0 index element of the vector after push_back element

        cout << "-------------" << endl;

        cout << " Print vector element " << endl;
        for (int i : v)
        {
            cout << i << "\t"; // Print all the element of the vector
        }
        cout << endl;

        cout << "-------------" << endl;

        v.pop_back(); // pop_back(),is used to remove last element of the vactor

        cout << "-------------" << endl;

        cout << " After used pop back " << endl;
        for (int i : v)
        {
            cout << i << "\t"; // Print all the element of the vector after used pop_back() function
        }
        cout << endl;

        cout << "-------------" << endl;

        cout<<"Size of the vector :"<<v.size()<<endl;
        cout<<"Capacity of the vector :"<<v.capacity()<<endl;
        v.clear(); //clear(),It is used to remove all the element of the array  but is can't clear capacity of the vector
        cout<<"Size of the vector after the used clear :"<<v.size()<<endl;
        cout << "Capacity of the vector after the used clear " << v.capacity() << endl;

        cout << "-------------" << endl;

    */

    cout << "**************************************" << endl;

    /*

    cout << "-------------" << endl;
    // ----DEQUE IN STL----
    // syntax: deque<{{array datatype}}> {{vector name }};
    deque<int> d;

    d.push_front(2); // push_front(),It is used to insert element at the first
    d.push_front(4);
    d.push_back(9);  // push_back(),It is used to insert element at the last
    d.push_back(11); // push_back(),It is used to insert element at the last
    for (int i : d)
    {
        cout << i << "\t"; // Print the deque element after pushing element
    }
    cout << endl;

    cout << "-------------" << endl;

    d.pop_back();  // pop_back(),It is used to remove element from the last
    d.pop_front(); // pop_front(),It is used to remove element from the front
    cout << "Print element after pop" << endl;
    for (int i : d)
    {
        cout << i << "\t"; // Print the deque element after poping element
    }
    cout << endl;

    cout << "-------------" << endl;

    cout << "0 index element is " << d.at(0) << endl; // print the first element of the deque

    cout << "-------------" << endl;

    cout << "First element :" << d.front() << endl; // front(),is used to print the front element from the deque
    cout << "Last element :" << d.back() << endl;   // back(),is used to print the last element from the deque

    cout << "-------------" << endl;

    cout << "Empty or not ! " << d.empty() << endl; // empty(),used to check empty or not

    cout << "-------------" << endl;

    cout << "Befor used erase size of the deque " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // erase(),used to erase element to a range ((-< erase only first element))
    cout << "After used erase size of the deque " << d.size() << endl;

    cout << "-------------" << endl;

    */

    cout << "**************************************" << endl;

    /*

    cout << "-------------" << endl;
    // ----SET  IN STL---
    // syntax: set<{{set datatype}}> {{set name }};

    set<int> s;
    s.insert(2); // insert element into the set.
    s.insert(4);
    s.insert(4); // It can't  insert ,because duplicate element not allowed to the set .
    s.insert(5);
    s.insert(8);

    for (auto i : s)
    {
        cout << i << endl; // print all the element of the set
    }

    cout << "-------------" << endl;

    // s.erase(s.begin()); // It erase the given position element
    // cout << "Print element after erase first element" << endl;
    for (auto i : s)
    {
        cout << i << endl; // print all the element of the set
    }

    cout << "-------------" << endl;

    set<int>::iterator it = s.begin();
    it++; // it erase second element of the set
    // s.erase(it);
    for (auto i : s)
    {
        cout << i << endl; // print all the element of the set
    }

    cout << "-------------" << endl;

    cout << s.count(4) << endl; // count(),Its check 4  element is present or not

    cout << "-------------" << endl;

    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";//Its start from where 5 is present in found
    }
    cout << endl;

    cout << "-------------" << endl;

*/

    cout << "**************************************" << endl;

    /*

    cout << "-------------" << endl;

    // ---- MAP IN STL ----
    // syntax: map<{{map key datatype}},{{ map value datatype}}> {{map name }};
    map<int, string> m; // here int is the datatype of the key and string is the datatype of the value
    m[1] = "pj";        // Here , 1 is key of the value of pj
    m[2] = "pjphukan";
    m[4] = "paragjyoti phukan";
    m.insert({5, "pjp"}); // Another method to insert value into the map
    for (auto i : m)
    {
        cout << i.first << " "; // Printing all key of map(first means key)
    }
    cout << endl;

    cout << "-------------" << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second; // Printing all key (first means key) and value ( second means value) of the map
        cout << endl;
    }
    cout << endl;

    cout << "-------------" << endl;

    cout << "Check key is present or not  " << m.count(2) << endl; // count(),Its used to check the key is present or not

    cout << "-------------" << endl;

    m.erase(1); // erase the 1 key value
    cout << "After the erase 1 key " << endl;
    for (auto i : m)
    {
        cout << i.first << endl;
    }

    cout << "-------------" << endl;

    auto it = m.find(4); // find(),It returns the iterator of the 3
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

     cout << "-------------" << endl;

*/

    cout << "**************************************" << endl;

    /**/

    cout << "-------------" << endl;

    // ---- ALGORITHM IN STL ----
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(32);
    v1.push_back(45);
    v1.push_back(63);
    v1.push_back(92);

    // Binary search
    cout << binary_search(v1.begin(), v1.end(), 34) << endl; // binary_search(),It is used to search a element in  vector using binary search method.This is a in build libary function in algorithm.It returns 1 ,if the element is present in the vector  and returns 0 if element is doesnot present in the vector

    cout << "-------------" << endl;

    cout << lower_bound(v1.begin(), v1.end(), 45) - v1.begin() << endl; // lower_bound(),it returns iterator of the value

    cout << "-------------" << endl;

    // Minimum and maximum and swap
    int x = 3;
    int y = 9;
    cout << min(x, y) << endl; // Its returns the minimum value between x and y

    cout << "-------------" << endl;

    cout << max(x, y) << endl; // Its returns the maximum value between x and y

    cout << "-------------" << endl;

    swap(x, y); // Its swap value given two varialbe
    cout << "After swapping the value of x and y is : x=" << x << "  y =" << y << endl;


    cout << "-------------" << endl;

    //Reverse string 
    string s="Paragjyoti phukan";

    cout<<"Before reversing the string "<<s<<endl;
    reverse(s.begin(),s.end());//Used to reverse a string
    cout<<"After reversing the string "<<s<<endl;

    cout << "-------------" << endl;

    //rotate vector

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(20);
    v2.push_back(10);
    v2.push_back(12);

    rotate(v2.begin(),v2.begin()+1,v2.end());//rotate 1 element of the vector
    for(auto i:v2){
        cout<<i<<" ";
    }
    cout<<endl;

    cout << "-------------" << endl;

    sort(v2.begin(),v2.end());//It sort the vector (It work based on intro sort ( insertion ,quick and heap sort ))
    cout<<"after used sort algorithm"<<endl;
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout<<endl;
    cout << "-------------" << endl;

    return 0;
}