/*
Question Url:
https://www.codechef.com/problems/AMMEAT
*/

/*Solution*/
#include<bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll test;
	cin >> test;
	while(test--){
	    ll n,m;
	    cin >> n >> m;
	    ll arr[n];
	    for(ll i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    sort(arr, arr+n);
	    ll num = 0;
	    ll current = 0;
	    bool flag = false;
	    for(ll i=n-1; i>=0; i--){
	        current += arr[i];
	        num++;
	        if(current >= m){
	            flag = true;
	            break;
	        }
	    }
	    if(flag){
	        cout << num << endl;
	    }else{
	        cout << "-1" << endl;
	    }
	    
	}
	return 0;
}
