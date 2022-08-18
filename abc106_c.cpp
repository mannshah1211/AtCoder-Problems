// Problem: C - To Infinity
// Contest: AtCoder - AtCoder Beginner Contest 106
// URL: https://atcoder.jp/contests/abc106/tasks/abc106_c
// Memory Limit: 976 MB
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
  string s;
  cin >> s;
  
  long long k;
  cin >> k;
  k--;
  
  long long ind = -1;
  
  for(long long i = 0; i < s.length(); i++){
  	if(s[i] != '1'){
  		ind = i - 1;
  		break;
  	}
  }
  
  if(k <= ind){
  	cout << 1;
  } else{
  	cout << s[ind + 1];
  }
  return 0;
}
