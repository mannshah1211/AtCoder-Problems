// Problem: D - Prime Sum Game
// Contest: AtCoder - Denso Create Programming Contest 2022(AtCoder Beginner Contest 239)
// URL: https://atcoder.jp/contests/abc239/tasks/abc239_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	
	return true;
}

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	bool takahashi[200];
	for(int i = a; i <= b; i++){
		takahashi[i] = true;
	}
	for(int i = a; i <= b; i++){
		for(int j = c; j <= d; j++){
			if(isPrime(i + j)){
				takahashi[i] = false;
			}
		}
	}
	
	for(int i = a; i <= b; i++){
		if(takahashi[i]){
			cout << "Takahashi";
			return 0;
		}
	}
	
	cout << "Aoki";
}