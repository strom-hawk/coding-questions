/*
Question Url:
https://www.codechef.com/START7C/problems/FODCHAIN
*/

/*Solution*/
#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll test;
	cin >> test;
	while(test--){
	    ll a, b;
	    cin >> a >> b;
	    
	    ll level = 0;
	    while(a > 0){
	        a = a/b;
	        level++;
	    }
	    
	    cout << level << endl;
	    
	}
	return 0;
}
