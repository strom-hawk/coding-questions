/*
Question Url:
https://www.codechef.com/JUNE21C/problems/BITTUP
*/

/*Solution*/
#include<bits/stdc++.h>
#include <iostream>
#define MOD 1000000007
#define ll long long
using namespace std;

ll powerOfN(ll first, ll second){
    ll result = 1;
    while(second > 0){
        if(second & 1){
            result = (result * first) % MOD;
        }
        first = (first * first) % MOD;
        second >>= 1;
    }
    return result;
}

ll powerUsingMod(ll x, ll y, ll mod){
    ll result = 1;
    x = x % mod;
    y = y % mod;
    if(x == 0)
        return 0;
    while(y > 0){
        if(y & 1){
            result = (result * x) % mod;
            }
            y >>= 1;
            x = (x * x) % mod;
    }
    return result;
}

int main() {
	ll test;
	cin >> test;
	while(test--){
	    ll n=0, m=0;
	    cin >> n >> m;
	    ll powerOfNValue = (powerOfN(2,n) - 1);
	    ll answer = (powerUsingMod(powerOfNValue, m, MOD));
	    cout << answer<< endl;
	}
	return 0;
}
