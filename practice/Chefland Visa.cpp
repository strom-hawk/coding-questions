/*
Question Url:
https://www.codechef.com/COOK130C/problems/VISA
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
	    ll x1, x2, y1, y2, z1, z2;
	    cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
	    if(x2 >= x1 && y2 >= y1 && z2 <= z1){
	        cout << "YES";
	    }else{
	        cout << "NO";
	    }
	    cout << endl;
	}
	return 0;
}
