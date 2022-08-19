// Problem: C - 1111gal password
// Contest: AtCoder - AtCoder Beginner Contest 242
// URL: https://atcoder.jp/contests/abc242/tasks/abc242_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
#define MOD (ll) (998244353)
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

ll dp[1000007][10];



int main(){
  ll n;
  cin >> n;
  
  for(ll i = 1; i < 10; i++){
  	dp[1][i] = 1;
  }
  
  for(ll j = 2; j < 1000007; j++){
      for(ll i = 1; i < 10; i++){
  	      if(i != 9 and i != 1){
  	      	dp[j][i] = dp[j - 1][i - 1] + dp[j - 1][i] + dp[j - 1][i + 1];
  	      	dp[j][i] %= MOD;
  	      } else if(i == 1){
  	      	dp[j][i] = dp[j - 1][i + 1] + dp[j - 1][i];
  	      	dp[j][i] %= MOD;
  	      } else{
  	      	dp[j][i] = dp[j - 1][i - 1] + dp[j - 1][i];
  	      	dp[j][i] %= MOD;
  	      }
      }
  }
  
  ll ans = 0;
  for(ll i = 1; i < 10; i++){
  	ans += dp[n][i];
  	ans %= MOD;
  }
  
  print(ans);
  return 0;
}
