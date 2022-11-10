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
priority_queue<int>q;

q.push(4);
q.push(3);
q.push(1);
q.push(10);
q.push(2);
q.push(6);

test=5;

while(!q.empty()){
    cout<<q.top()<<" ";//there is no front in PQ
    q.pop();
}//print sorted result



priority_queue<pair<int,int>>Q;
Q.push({4,5});
Q.push(5,3);
Q.push(2,1);
Q.push(1,0);
Q.push(2,7);
Q.push(6,3);
while(!Q.empty()){
    cout<<Q.top().first<<" "<<Q.top().second<<" ";//there is no front in PQ
    Q.pop();
}


}