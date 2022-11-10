#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, char> PAIR1(3,'s');
     
     cout<<PAIR1.first<<" "<<PAIR1.second;
    // first part of the pair
    PAIR1.first = 100;
    // second part of the pair
    PAIR1.second = 'G';

    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;

    pair<int, char> PAIR2;

    cin>>PAIR2.first;

    cin>>PAIR2.second;

    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;



}
/*
int a[x+1],b[x+1],ct0=0,ct1=0,result;
    for(int i=0;i<x;i++){
        cin>>a[i];
        if(a[i]==0)ct0++;
        else ct1++;
    }
    for(int i=0;i<x;i++){
        cin>>b[i];
    }
    if(ct0==0){
        for(int i=0;i<x;i++){
        result+=b[i];
    }
    }
    else if(ct0==ct1){
        for(int i=0;i<x;i++){
        result+=2*b[i];
    }
    }
    */