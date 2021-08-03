/*
Question Url:
https://www.codechef.com/START7C/problems/CHSFORMT
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
	    ll sum = a + b;
	    
	    if(sum > 60){
	        cout << "4" << endl;
	    }
	    else if(sum >= 11){
	        cout << "3" << endl;
	    }
	    else if(sum >= 3){
	        cout << "2" << endl;
	    }
	    else{
	        cout << "1" << endl;
	    }
	}
	return 0;
}


	