/*
Question Url:
https://www.codechef.com/problems/DECSTR
*/

/*Solution*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll test;
    cin >> test;
    while(test--){
        ll n;
        cin >> n;
        ll quotient = n/25;
        ll remain = n%25;

        if(remain > 0){
            while(remain >=0){
                cout << char(remain + 97);
                remain--;
            }
        }
        
        while(quotient){
            ll start = 122;
            while(start >= 97){
                cout << char(start);
                start--;
            }
            
            quotient--;
        }
        cout << endl;
    }
    return 0;
}