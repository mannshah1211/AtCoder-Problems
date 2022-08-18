// Problem: C - Multiple Clocks
// Contest: AtCoder - AtCoder Beginner Contest 070
// URL: https://atcoder.jp/contests/abc070/tasks/abc070_c
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll GCD(ll x, ll y)
{
    if (y == 0) return x;
    return GCD(y, x%y);
}

ll lc(ll a, ll b){
	return (max(a, b)/GCD(a, b))*min(a, b);
} 

int main(){
	ll n;
	cin >> n;
	
	ll a[n];
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	
	ll l = a[0];
	for(ll i = 0; i < n; i++){
		l = lc(l, a[i]);
	}
	
	cout << l;
}