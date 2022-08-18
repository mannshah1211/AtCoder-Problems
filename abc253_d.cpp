// Problem: D - FizzBuzz Sum Hard
// Contest: AtCoder - NOMURA Programming Contest 2022（AtCoder Beginner Contest 253）
// URL: https://atcoder.jp/contests/abc253/tasks/abc253_d
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
  ll n, a, b;
  cin >> n >> a >> b;
  
  ll ans = (n * (n + 1))/2;
  ll lastMul = n/a;
  ll lastMul2 = n/b;
  
  ans -= (a*(lastMul)*(lastMul + 1))/2;
  ans -= (b*(lastMul2)*(lastMul2 + 1))/2;
  
  ll lastMul3 = (n * __gcd(a, b))/(a * b);
  ans += ((a * b)*(((lastMul3)*(lastMul3 + 1))/2))/__gcd(a, b);
  cout << ans;
  return 0;
}
