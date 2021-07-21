/*
Question Url:
https://www.codechef.com/problems/EITA
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
	    ll d,x,y,z;
	    cin >> d >> x >> y >> z;
	    
	    ll work1 = x * 7;
	    ll work2 = (y*d)+(z*(7-d));
	    
	    ll maxWork = work1 > work2? work1 : work2;
	    
	    cout << maxWork << endl;
	}
	return 0;
}
