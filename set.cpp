#include<bits/stdc++.h>
using namespace std;

int main()
{
    // empty set container
    set<int, greater<int> > s1;

    // insert elements in random order
    // only the single 50,60,20 will be added to the set,others will be trancated
    
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
    s1.insert(50);
    s1.insert(10);
    s1.insert(60);
    s1.insert(20);

    for(auto val:s1)cout<<val<<" ";//printing method
    cout << endl;



    for (auto itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << " ";
    }//another printing method
    cout << endl;

    
    set<int> s2(s1.begin(), s1.end());// assigning the elements from s1 to s2

     for(auto val:s2)cout<<val<<" ";
    cout << endl;

    

    s2.erase(s2.begin(), s2.find(30));// remove all elements up to 30 in s2
    
    int num;
    num = s2.erase(50);// remove element with value 50 in s2
    


    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(40) : \n"
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : \n"
         << *s1.upper_bound(40) << endl;

    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) :\n"
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : \n"
         << *s2.upper_bound(40) << endl;

    return 0;
}
