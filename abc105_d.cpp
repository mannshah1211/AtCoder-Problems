// Problem: D - Candy Distribution
// Contest: AtCoder - AtCoder Beginner Contest 105
// URL: https://atcoder.jp/contests/abc105/tasks/abc105_d
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
  ll n, m;
  cin >> n >> m;
  
  ll a[n];
  for(ll i = 0; i < n; i++){
  	cin >> a[i];
  }
  
  ll pre[n];
  pre[0] = a[0];
  for(ll i = 1; i < n; i++){
  	pre[i] = pre[i - 1] + a[i];
  }
  
  map <ll, ll> modulofreq;
  ll ans = 0;
  for(ll i = 0; i < n; i++){
  	modulofreq[pre[i] % m] = 0;
  }
  
  for(ll i = 0; i < n; i++){
  	modulofreq[pre[i] % m]++;
  }
  
  for(auto& i : modulofreq){
  	if(i.first == 0){
  		ans += i.second;
  	}
     ans += ((i.second)*(i.second - 1))/2;
  }
  
  cout << ans;
  return 0;
}
