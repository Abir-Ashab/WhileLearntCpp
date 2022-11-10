#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i,x) for(int i=0;i<x;i++)
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) x.begin(), x.end()
const int N=1e5+123;
 
int main()
{
int test;
queue<int>q;
stack<int>s;

q.push(4);
q.push(3);
q.push(1);
q.push(10);
q.push(2);
q.push(6);

test=3;
s.push(10);
s.push(2);
s.push(6);

while(test--){
    cout<<s.top()<<" ";
    s.pop();
}
test=3;
while(test--){
    cout<<q.front()<<" ";
    q.pop();
}
}