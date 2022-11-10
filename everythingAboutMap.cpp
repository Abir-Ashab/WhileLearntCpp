#include<bits/stdc++.h>
using namespace std;

int main()
{

    map<int, int> gquiz1;

    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));

    gquiz1[7]=10; // another way of inserting a value in a map :map_name[index]=corresponding value 


    // printing map
    cout << "The map gquiz1 is : \n";
    for (auto itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout <<itr->first << '\t' << itr->second<<endl;
    }
    cout<<endl;

    // assigning the elements from gquiz1 to gquiz2

    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());
    cout << "The map gquiz1 is : \n";
    for (auto val: gquiz2) {
        cout <<val.first << '\t'  << val.second<<endl;
    }
    cout<<endl;

    cout << "after removal of elements less than key=3 : \n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (auto val: gquiz2) {
        cout <<val.first << '\t'  << val.second<<endl;
    }
    cout<<endl;
    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "gquiz2.erase(4) : ";
    cout << num << " removed \n";
    for (auto val: gquiz2) {
        cout <<val.first << '\t'  << val.second<<endl;
    }
    cout << endl;


   map<string,int>m;
   m["niloy"]=1;
   m["abir"]=2;
   m["ashab"]=4;
   m["niloy"]=5;//first will be replaced by this 

   for (auto val: m) {
        cout <<val.first << '\t'  << val.second<<endl;
    }
    cout << endl;

   vector<long long>v={12873848,23,23,45,67,89,4345656,726382738239872,82900989988,5243672,726382738239872,12873848,23,23,45,67,89,4345656,726382738239872,82900989988,5243672,726382738239872};
   map<int,int>mp;
   for(auto val:v)mp[val]++;//kon value koybar kore achhe eta count korbe,it can count upto 10^18
   
   for (auto val: mp) {
        cout <<val.first << '\t'  << val.second<<endl;
    }
    cout << endl;

}
