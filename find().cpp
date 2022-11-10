#include<bits/stdc++.h>
using namespace std;

int main()
{
	map< char, int > mp;

	map<char, int>::iterator it ;
	map<char, int>::iterator it1 ;

	mp['a']=5;
	mp['b']=10;
	mp['c']=15;
	mp['d']=20;
	mp['e']=30;


	// "it" has address of key value pair.
	it = mp.find('b');

	if(it == mp.end())
		cout << "Key-value pair not present in map" ;
	else
		cout << "Key-value pair present : "
		<< it->first << "->" << it->second ;

	cout << endl ;

	it1 = mp.find('m');

	if(it1 == mp.end())
		cout << "Key-value pair not present in map" ;
	else
		cout << "Key-value pair present : "
			<< it1->first << "->" << it1->second ;

}

