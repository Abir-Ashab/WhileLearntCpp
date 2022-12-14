#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    // fill the array with 10 five times
    v.assign(5, 10);
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";



    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\nThe new vector elements after inserting the last element are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";





    // removes last element
    v.pop_back();
    // prints the vector
    cout << "\nThe vector elements after removing the last element are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";



    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
    //cout << "\nThe first element is: " << v[0];
   cout << "\nThe vector elements after inserting 5 as the first element are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";




    // removes the first element
    v.erase(v.begin());
     cout << "\nThe vector elements after erasing the first element are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";


    // inserts at the beginning
    v.emplace(v.begin()+1, 5);
    cout << "\nThe vector elements after emplacing 5 as the first element are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";



    // Inserts 20 at the end
    v.emplace_back(20);
    cout << "\nThe vector elements after emplacing back 20 as the last element are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";


    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size()<<endl;



    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    cout << "after pushing (1,2) Vector 1 is: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

        cout<<endl;


    cout << "after pushing (3,4) Vector 2 is: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";



    // Swaps v1 and v2
    v1.swap(v2);

    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
}
