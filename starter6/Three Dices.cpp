/*
Question Url:
https://www.codechef.com/START6C/problems/THREDICE
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
	    ll first, second;
	    cin >> first >> second;
	    ll sum = first + second;
	    ll remain = 6.0 - sum;
	    if(remain < 0)
	        remain = 0;
	    
	    cout << remain/6.0 << endl;
	}
	return 0;
}
