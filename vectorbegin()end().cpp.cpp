#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declaration of vector container
    vector<string> myvector{ "This", "is",
                             "Geeksforgeeks" };

    // using begin() to print vector
    for (auto it = myvector.begin();
         it != myvector.end(); ++it)
        cout << ' ' << *it;
}
