/*
Question Url:
https://www.codechef.com/problems/PLZLYKME
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
	    ll l,d,s,c;
	    cin >> l >> d >> s >> c;
	    
	    ll totalLikes = s;
	    
	    for(ll i=1; i<d; i++){
	        totalLikes = totalLikes + c * totalLikes;
	        if(totalLikes >= l)
	            break;
	    }
	    
	    if(totalLikes < l){
	        cout << "DEAD AND ROTTING";
	    }else{
	        cout << "ALIVE AND KICKING";
	    }
	    cout << endl;
	}
	return 0;
}
