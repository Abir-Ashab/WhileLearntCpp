#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i,x) for(int i=0;i<x;i++)
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) x.begin(), x.end()
const int N=1e5+123;
#define PQ priority_queue
 
int main()
{
Fast(input);
int test=6;

deque<int>q;

q.push_front(4);
q.push_front(3);
q.push_front(1);
q.push_front(10);
q.push_front(2);
q.push_back(6);

cout<<q.front()<<" "<<q.back()<<endl;
q.pop_front();

cout<<q.front()<<" "<<q.back()<<endl;

while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop_front();
}

}