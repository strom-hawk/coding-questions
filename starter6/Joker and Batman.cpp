/*
Question Url:
https://www.codechef.com/START6C/problems/JOKRBTMN
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
	    ll n,m,l;
	    unordered_map<int, int> map;
	    cin >> n >> m >> l;
	    
	    for(ll i=0; i<m; i++){
	        ll arrLength = 0;
	        cin >> arrLength;
	        
	        for(ll j=0; j<arrLength; j++){
	            ll temp;
	            cin >> temp;
	            map[temp] = i;
	        }
	    }
	    
	    ll segment = 1;
	    ll strip[l];
	    
	    cin >> strip[0];
	    for(ll i=1; i<l; i++){
	        cin >> strip[i];
	        if(map[strip[i]] != map[strip[i-1]]){
	            segment++;
	        }
	    }
	    
	    cout << segment <<endl;
	}
	return 0;
}

	