// Problem: C - Changing Jewels
// Contest: AtCoder - AtCoder Beginner Contest 260
// URL: https://atcoder.jp/contests/abc260/tasks/abc260_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

long long util(long long level, long long num, bool isRed, long long x, long long y){
	if(level == 1 and isRed){
		return 0;
	}
	
	if(level == 1 and !isRed){
		return num;
	}
	
	if(isRed){
	   return util(level - 1, num, true, x, y) + util(level, x*num, false, x, y);
	} else{
		return util(level - 1, num, true, x, y) + util(level - 1, y*num, false, x, y);
	}
}

int main(){
	long long n, x, y;
	cin >> n >> x >> y;
	
	cout << util(n, 1, true, x, y);
}