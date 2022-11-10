#include<bits/stdc++.h>
using namespace std;
#define fo(i,test) for(int i=0;i<test;i++)
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) x.begin(), x.end()
 
int main()
{
vector<string>x;

int test=5;
fo(i,test){
    string s;
    cin>>s;
    x.push_back(s);
}
sort(all(x));
for(auto val:x)cout<<val<<endl;
}