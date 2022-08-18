// Problem: C - March
// Contest: AtCoder - AtCoder Beginner Contest 089
// URL: https://atcoder.jp/contests/abc089/tasks/abc089_c
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	
	long long M = 0;
	long long A = 0;
	long long R = 0;
	long long C = 0;
	long long H = 0;
	
	for(int i = 0; i < n; i++){
		string str;
		cin >> str;
		
		if(str[0] == 'M'){
			M++;
		}
		
		if(str[0] == 'A'){
			A++;
		}
		
		if(str[0] == 'R'){
			R++;
		}
		
		if(str[0] == 'C'){
			C++;
		}
		
		if(str[0] == 'H'){
			H++;
		}
	}
	
	
	
	cout << (M*A*R) + (M*A*C) + (M*A*H) + (A*R*C) + (A*R*H) + (M*R*C) + (M*R*H) + (M*C*H) + (R*C*H) + (A*C*H);
}