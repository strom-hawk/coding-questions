/*
Question Url:
https://www.codechef.com/problems/ALEXNUMB
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
	    vector<int> numbers;
	    ll n;
	    cin >> n;
	    for(int i=0; i<n; i++){
	        int number;
	        cin >> number;
	        numbers.push_back(number);
	    }
	    
	    ll sum = n * (n-1) / 2;
	    cout << sum << endl;
	}
	return 0;
}
