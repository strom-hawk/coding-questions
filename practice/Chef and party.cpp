/*
Question Url:
https://www.codechef.com/problems/CHFPARTY
*/

/*Solution*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define MOD 1000000

int main() {
	ll test;
	cin >> test;
	while(test--){
	    ll n;
	    cin >> n;
	    ll arr[n] = {0};
	    for(ll i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    
	    sort(arr, arr+n);
	    ll sum = 0;
	    for(ll i=0; i<n; i++){
	        if(sum >= arr[i]){
	            sum = (sum+1) % MOD;
	        }else{
	            break;
	        }
	    }
	    cout << sum << endl;
	}
	return 0;
}
