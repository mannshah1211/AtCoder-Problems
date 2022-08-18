// Problem: C - Takahashi's Information
// Contest: AtCoder - AtCoder Beginner Contest 088
// URL: https://atcoder.jp/contests/abc088/tasks/abc088_c
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main(){
	int c[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> c[i][j];
		}
	}
	
	int sum1 = c[2][0] + c[0][1] + c[1][2];
	int sum2 = c[0][0] + c[1][1] + c[2][2];
	int sum3 = c[0][2] + c[1][0] + c[2][1];
	
	if(sum1 == sum2 and sum2 == sum3 and sum3 == sum1){
		cout << "Yes";
	} else{
		cout << "No";
	}
}