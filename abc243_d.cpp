// Problem: D - Moves on Binary Tree
// Contest: AtCoder - AtCoder Beginner Contest 243
// URL: https://atcoder.jp/contests/abc243/tasks/abc243_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
// Editorial seen

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

ll exponent_mod(ll a, ll b){
    ll res = 1;
    while(b){
        if(b % 2 == 1){
            res *= a;
            // res %= MOD;
        }

        a = (a * a); // % MOD;
        b /= 2;
        // res %= MOD;
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

vector<char> convertToBinary(ll n){
	vector<char> ans;
	while(n){
		ans.push_back((char) ((n % 2) + '0'));
		n /= 2;
	}
	
	reverse(ans.begin(), ans.end());
	
	return ans;
}



int main(){
  long long n, x;
  cin >> n >> x;
  
  string str;
  cin >> str;
  
  vector<char> s = convertToBinary(x);
  for(long long i = 0; i < n; i++){
  	if(str[i] == 'L'){
  		s.push_back('0');
  	} else if(str[i] == 'R'){
  		s.push_back('1');
  	} else{
  		s.pop_back();
  	}
  }
  
  long long ans = 0;
  
  for(long long i = 0; i < s.size(); i++){
  	  ans += exponent_mod(2, s.size() - i - 1) * (s[i] - '0');
  }
  
  cout << ans;
  return 0;
}
