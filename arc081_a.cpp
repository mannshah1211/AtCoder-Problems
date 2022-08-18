// Problem: C - Make a Rectangle
// Contest: AtCoder - AtCoder Beginner Contest 071
// URL: https://atcoder.jp/contests/abc071/tasks/arc081_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	map <long long, long long> freq;
	for(long long i = 0; i < n; i++){
		freq[a[i]] = 0;
	}
	
	for(long long i = 0; i < n; i++){
		freq[a[i]]++;
	}
	
	map<long long, bool> vis;
	vector<long long> t;
	long long ans = 0;
	for(long long i = 0; i < n; i++){
		if(freq[a[i]] >= 2 and freq[a[i]] < 4 and vis.count(a[i]) == 0){
			vis[a[i]] = true;
			t.push_back(a[i]);
		} else if(freq[a[i]] >= 4 and vis.count(a[i]) == 0){
			vis[a[i]] = true;
			t.push_back(a[i]);
			t.push_back(a[i]);
		}
	}
	
	sort(t.begin(), t.end());
	if(t.size() >= 2){
		ans = t[t.size() - 1]*t[t.size() - 2];
	}
	
	cout << ans;
}