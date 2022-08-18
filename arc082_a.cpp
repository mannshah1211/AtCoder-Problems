// Problem: C - Together
// Contest: AtCoder - AtCoder Beginner Contest 072
// URL: https://atcoder.jp/contests/abc072/tasks/arc082_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	map <int, int> freq;
	for(int i = 0; i < n; i++){
		freq[a[i]] = 0;
	}
	
	for(int i = 0; i < n; i++){
		freq[a[i]]++;
	}
	
	int max = INT_MIN;
	
	for(int x = 0; x <= 100000; x++){
		if(x - 1 < 0){
			if(max < freq[x] + freq[x + 1]){
				max = freq[x] + freq[x + 1];
			}
		}
		if(max < freq[x] + freq[x - 1] + freq[x + 1]){
			max = freq[x] + freq[x - 1] + freq[x + 1];
		}
	}
	
	cout << max;
	
}