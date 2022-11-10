#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
জ
    for(auto val:v)cout<<val<<" ";//special printing method
    cout<<'\n';



   
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";//work like array
    cout<<'\n';



    v.clear();//delete all the values the vector had
    for (int i = 1; i <= 5; i++)
        v.push_back(i+2);

     for(auto val:v)cout<<val<<" ";
     cout<<'\n';




     v.resize(10);
     for(auto val:v)cout<<val<<" ";//after resizing,will assign zero to the rest of position
     cout<<'\n';



     
    vector<int>v1(10,5);//will assign 5 to all the 10 indexes

    for(auto val:v1)cout<<val<<" ";
     cout<<'\n';





     vector<int>v2;
     v2=v1;//will assign the same to v2 what v1 had
     for(auto val:v2)cout<<val<<" ";
     cout<<'\n';
     v2.clear();



    for (int i = 1; i <= 5; i++)
        {v2.push_back(i+4);v2.push_back(i-2);}

        sort(v2.begin(),v2.end());
    for(auto val:v2)cout<<val<<" ";//will print the sorted array[ascending]
     cout<<'\n';



     sort(v2.rbegin(),v2.rend());
    for(auto val:v2)cout<<val<<" ";//[descending]
     cout<<'\n';



    vector<int>::iterator it;//iteration declare korsi,cz max_element/min_element return iterator
    it=max_element(v2.begin(),v2.end());
    cout<<*it<<endl;
    it=min_element(v2.begin(),v2.end());
    cout<<*it<<endl;



    v2.erase(v2.begin()+3);//specific element deletion
    for(auto val:v2)cout<<val<<" ";
    cout<<'\n';


    int test=3;
    while(test--){
        v2.pop_back();//3 times pop from back
    }
    for(auto val:v2)cout<<val<<" ";
    cout<<'\n';

}
