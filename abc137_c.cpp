// Problem: C - Green Bin
// Contest: AtCoder - AtCoder Beginner Contest 137
// URL: https://atcoder.jp/contests/abc137/tasks/abc137_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	
	string arr[n];
	for(long long i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	vector<map <char, long long>> mp;
	for(long long i = 0; i < n; i++){
		map <char, long long> freq;
		for(long long j = 0; j < 10; j++){
			freq[arr[i][j]] = 0;
		}
		
		for(long long j = 0; j < 10; j++){
			freq[arr[i][j]]++;
		}
		
		mp.push_back(freq);
	}
	
	map<map<char, long long>, long long> mpmp;
	for(long long i = 0; i < mp.size(); i++){
		mpmp[mp[i]] = 0;
	}
	
	for(long long i = 0; i < mp.size(); i++){
		mpmp[mp[i]]++;
	}
	
	long long ans = 0;
	
	for(auto& i : mpmp){
		ans += ((i.second) * (i.second - 1))/2;
	}
	
	cout << ans;
}