// Problem: D - Weak Takahashi
// Contest: AtCoder - M-SOLUTIONS Programming Contest 2021(AtCoder Beginner Contest 232)
// URL: https://atcoder.jp/contests/abc232/tasks/abc232_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
// Seen Editorial

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define int ll;
#define print(x) cout << x
#define dbg(x) cerr << x
#define forn(i, m, n) for(int i = int(m); i < int(n); i++)
#define forg(i, n) forn(i, 0, n)
#define vi vector<int>
#define vvi vector<vi>
#define vc vector<char>
#define vvc vector<vc>
#define vb vector<bool>
#define vvb vector<vb>
#define MOD (ll) (1e9 + 7)
#define all(x) (x.begin(), x.end())


/* void dfs(int u){
  vis[u] = true;
  for(int i : adj[u]){
      if(!vis[i]){
          dfs(i);
      }
  }
}

int connectedComponents(int v){
  int compo = 0;
  forg(i, v){
      if(!vis[i]){
         compo++;
         dfs(i);
      }
  }

  return compo;
}

void dfs(int u, int par){
  vis[u] = true;
  for(int v : adj[u]){
      if(v != par and !vis[v]){
         dfs(v, u);
      }
  }
} */

ll exponent_mod(int a, int b){
    ll res = 1;
    while(b){
        if(b % 2 == 1){
            res *= a;
            res %= MOD;
        }

        a = (a * a) % MOD;
        res *= a;
        res %= MOD;
    }

    return res;
}

void pr(bool x){
    if(x){
        cout << "Yes";
    } else{
        cout << "No";
    }
}

void pre(bool x){
    if(x){
        cout << "YES";
    } else{
        cout << "NO";
    }
}



int main(){
	int h, w;
	cin >> h >> w;
	
	char a[h][w];
	
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cin >> a[i][j];
		}
	}
  int dp[h + 1][w + 1];
  for(int i = 0; i <= h; i++){
  	for(int j = 0; j <= w; j++){
  		dp[i][j] = 0;
  	}
  } 
  
  for(int i = h - 1; i >= 0; i--){
  	for(int j = w - 1; j >= 0; j--){
  		if(a[i][j] == '#'){continue;}
  		dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]) + 1;
  	}
  }
  
  cout << dp[0][0];
  return 0;
}
