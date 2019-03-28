#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
const ll MAXN = 3e3+5;
ll n, k, a[MAXN], b[MAXN];
 
void subtask1(){
    ll best = 0;
    for(ll i = 0; i < (1LL << n); ++i){
        ll h = 0;
        ll v = 0;
        for(ll j = 0; j < n; ++j){
            if (i & (1LL << j)){
                h += a[j+1];
                if (h > k) break;
                v += b[j+1];
            }
        }
        if (h <= k && v > best){
            best = v;
        }
    }
    cout << best << "\n";
}
void subtask2(){
    vector< vector<ll> > dp(n+1, vector<ll>(k+1));
 
    for(ll j = 1; j <= k; ++j){
        for(ll i = 1; i <= n; ++i){
            dp[i][j] = dp[i-1][j];
            if (a[i] <= j){
                dp[i][j] = max(dp[i][j], dp[i-1][j - a[i]] + b[i]);
            }
        }
    }
    cout << dp[n][k] << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) cin >> b[i];
    if (n <= 20){
        subtask1();
    } else {
        subtask2();
    }
}
