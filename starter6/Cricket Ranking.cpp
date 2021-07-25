/*
Question Url:
https://www.codechef.com/submit/CRICRANK
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
        ll r1, w1, c1, r2, w2, c2;
        cin >> r1 >> w1 >> c1 >> r2 >> w2 >> c2;
        
        ll player1 = 0;
        ll player2 = 0;
        
        r1 > r2 ? player1++ : player2++;
        w1 > w2 ? player1++ : player2++;
        c1 > c2 ? player1++ : player2++;
        
        player1 > player2 ? cout << "A" : cout << "B";
        cout << endl;
    }
	return 0;
}

