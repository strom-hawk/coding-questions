/*
Question Url:
https://www.codechef.com/COOK130C/problems/BALLOON
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
	    ll n;
	    cin >> n;
	    ll arr[n];
	    for(ll i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    ll totalProblemsSolved = 0;
	    ll sevenProblemsCompleted = 0;
	    for(ll i=0; i<n; i++){
	        ++totalProblemsSolved;
	        if(arr[i] <= 7){
	            ++sevenProblemsCompleted;
	        }
	        if(sevenProblemsCompleted >= 7){
	            break;
	        }
	    }
	    
	    cout << totalProblemsSolved << endl;
	}
	return 0;
}
