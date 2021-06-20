/*
Question Url:
https://www.codechef.com/problems/ARRROT
*/

/*Solution*/
#include<bits/stdc++.h>
#include <iostream>
#define ll long long int
#define MOD 1000000007
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll sum = 0;
    for(ll i=0; i<n; i++){
        ll num;
        cin >> num;
        if(num<0)
	        num = MOD+(num%MOD);
        sum += num ;
        sum = ((sum % MOD)% MOD)% MOD;
    }
    ll q;
    cin >> q;
    while(q--){
        ll x;
        cin >> x;
        sum += sum;
        sum = ((sum % MOD)% MOD)% MOD;
        cout << sum << endl;
    }
	return 0;
}
