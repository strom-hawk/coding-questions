/*
Question Url:
https://www.codechef.com/JUNE21C/problems/COCONUT
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
        ll maxWater, maxPulp, requiredWater, requiredPulp;
        cin >> maxWater >> maxPulp >> requiredWater >> requiredPulp;
        ll requiredSum = 0;
        
        requiredSum += requiredWater/maxWater;
        requiredSum += requiredPulp/maxPulp;
        
        cout << requiredSum << endl;
        
    }
	return 0;
}
