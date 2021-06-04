/*
Question Url:
https://www.codechef.com/problems/EVENGAME
*/

/*Solution*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

int main() {
	ll test;
	cin >> test;
	while(test--){
	    ll n;
	    ll sum = 0;
	    cin >> n;
	    for(ll i=0; i<n; i++){
	        ll input;
	        cin >> input;
	        sum += input;
	    }
	    
	    if(sum%2 == 0){
	        cout << "1";
	    }else{
	        cout << "2";
	    }
	    cout << endl;
	}
	return 0;
}
