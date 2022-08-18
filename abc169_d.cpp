// Problem: D - Div Game
// Contest: AtCoder - AtCoder Beginner Contest 169
// URL: https://atcoder.jp/contests/abc169/tasks/abc169_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

vector<long long> prime_factors(long long n){
	vector<long long> ans;
	for(long long i = 2; i * i <= n; i++){
		while(n % i == 0){
			ans.push_back(i);
			n /= i;
		}
	}
	
	if(n > 1){
		ans.push_back(n);
	}
	
	return ans;
}

int main(){
	long long n;
	cin >> n;
	
	unordered_map <long long, long long> freq;
	vector<long long> v = prime_factors(n);
	for(long long i = 0; i < v.size(); i++){
		freq[v[i]] = 0;
	}
	
	for(long long i = 0; i < v.size(); i++){
		freq[v[i]]++;
	}
	
	long long ans = 0;
	
	for(auto& i : freq){
		int k = i.second;
		if(1 <= k and k < 3){
			ans += 1;
		}
		
		if(3 <= k and k < 6){
			ans += 2;
		}
		
		if(6 <= k and k < 10){
			ans += 3;
		}
		
		if(10 <= k and k < 15){
			ans += 4;
		}
		
		if(15 <= k and k < 21){
			ans += 5;
		}
		
		if(21 <= k and k < 28){
			ans += 6;
		}
		
		if(28 <= k and k < 36){
			ans += 7;
		}
		
		if(36 <= k and k < 45){
			ans += 8;
		}
		
		if(45 <= k and k < 55){
			ans += 9;
		}
	}
	
	cout << ans;
}