// Problem: C - Lining Up
// Contest: AtCoder - AtCoder Beginner Contest 050
// URL: https://atcoder.jp/contests/abc050/tasks/arc066_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = (ll) (1e9 + 7);

int main(){
   ll n;
   cin >> n;
   
   ll a[n];
   for(ll i = 0; i < n; i++){
   	   cin >> a[i];
   }
   
   unordered_map <ll, ll> freq;
   for(ll i = 0; i < n; i++){
   	freq[a[i]] = 0;
   }
   
   for(ll i = 0; i < n; i++){
   	freq[a[i]]++;
   }
   
   bool flag = true;
   
   for(auto& i : freq){
   	if(i.first == 0 and i.second != 1){
   		flag = false;
   	} else if(i.first != 0 and i.second != 2){
   		flag = false;
   	}
   }
   
   if(!flag){
   	cout << 0;
   } else{
   	ll res = 1;
   	for(ll i = 0; i < n/2; i++){
   		res *= 2;
   		res %= MOD;
   	}
   	
   	if(res < 0){
   		res += MOD;
   	}
   	
   	cout << res;
   }
}