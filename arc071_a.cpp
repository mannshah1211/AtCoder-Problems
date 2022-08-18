// Problem: C - Dubious Document
// Contest: AtCoder - AtCoder Regular Contest 071
// URL: https://atcoder.jp/contests/arc071/tasks/arc071_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
 
bool appears(char c, string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == c){
			return true;
		}
	}
	
	return false;
}
 
 
int main(){
	int n;
	cin >> n;
	
	string a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
    int minFreq[26];
  for(int i = 0; i < 26; i++){
      minFreq[i] = INT_MAX;
  }
  for(int i = 0; i < n; i++){
      int currFreq[26];
      
      for(int j = 0; j < 26; j++){
          currFreq[j] = 0;
      }
    
      for(int j = 0; j < a[i].length(); j++){
          currFreq[a[i][j] - 'a']++;
      }
    
      for(int i = 0; i < 26; i++){
          minFreq[i] = min(minFreq[i], currFreq[i]);
      }
  }
	for(int i = 0; i < 26; i++){
        for(int j = 0; j < minFreq[i]; j++){
            cout << (char) (i + 'a');
        }
    }
}