/*
Question Url:
https://www.codechef.com/JUNE21C/problems/CHFHEIST
*/

/*Partial Solution*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

int main() {
	ll test;
	cin >> test;
	while(test--){
	    ll D, d, P, Q;
	    cin >> D >> d >> P >> Q;
	    
	    ll incrementFactor = 0;
	    ll interval = 0;
	    ll totalMoney = 0;
	    ll totalDays = D;
	    
	    for(ll i=0; i<D;){
	        //cout << i << " ";
	        ll moneyInOneDay = P + incrementFactor * Q;
	        
	        if(totalDays > d){
	            totalMoney += moneyInOneDay * d;
	        }else{
	            totalMoney += moneyInOneDay * totalDays;
	        }
	        totalDays -= d;
	        incrementFactor += 1;
	        i = i + d;
	    }
	    //cout << endl;
	    cout << totalMoney << endl;
	}
	return 0;
}
