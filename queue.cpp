#include<bits/stdc++.h>
using namespace std;
#define fo(i,x) for(int i=0;i<x;i++)
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) x.begin(), x.end()
 
int main()
{
int test;
queue<int>q;

q.push(4);
q.push(3);
q.push(1);
q.push(10);
q.push(2);
q.push(6);

test=5;
//Q:print 6 4 3 1 10 2
cout<<q.back()<<" ";
while(test--){
    cout<<q.front()<<" ";
    q.pop();
}

}