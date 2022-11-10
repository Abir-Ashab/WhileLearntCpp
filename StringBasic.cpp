#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="khanbahadur",s2;
cout<<*max_element(s.begin(),s.end());//normal printing 
cout<<'\n';
cout<<*min_element(s.begin(),s.end());//normal printing 
cout<<'\n';



string::iterator it;
for(it=s.begin();it!=s.end();it++){
    cout<<*it;//special printing
}
cout<<'\n';



s.erase(s.begin()+2);
for(auto val:s)cout<<val;
cout<<'\n';//easiest printing method after erasing



//removing a particular word from a string
s.erase(remove(s.begin(),s.end(),'a'),s.end());
cout<<s;
cout<<'\n';




s2=s;//assinging s to s2 string



reverse(s2.begin(),s2.end());//reverse the string
for(auto val:s2)cout<<val;
cout<<'\n';




string s4="abirashab";
sort(s4.begin(),s4.end());
int val=unique(s4.begin(),s4.end())-s4.begin();//unique digit er iterator return kore
for(int i=0;i<val;i++)cout<<s4[i];
cout<<endl;



s4.clear();
cout<<s4<<endl;//white space print korbe



string s3;
getline(cin,s3);//ek line string nibe,cin>>s3 dile just ekta word nito
cout<<s3;
}