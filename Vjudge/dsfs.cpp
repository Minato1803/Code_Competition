#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
int T;
ll ha, hb, atta, attb;
ll Get_sum(ll x) {
    return 1ll * x * (x + 1) / 2;
}
ll Get_round(ll x) {
    ll ans = 1;
    while(Get_sum(ans) < x) ans++;
    return ans ;
}
int main() {
    ios::sync_with_stdio(false) ;cin.tie(0) ;
    cin >> T;
    while(T--) {
        cin >> ha >> hb >> atta >> attb;
        ll ra = Get_round(ha), rb = Get_round(hb), rtot = Get_round(ha + hb);
//        cout<<ra<<" "<<rb<<" "<<rtot<<endl;
        string res(rtot,'B') ;
//        cout<<"res: "<<res<<endl;
        ll ans = min(atta * ra + attb * rtot , attb * rb + atta * rtot) ;
        if(atta * ra + attb * rtot == ans) {
            string cur(rtot,'A') ;
//            cout<<"cur: "<<cur<<endl;
            for(int i = ra ; i < rtot ; i++) cur[i] = 'B' ;
//            cout<<"cur aft: "<<cur<<endl;
            ll remain_a = Get_sum(ra) - ha , remain_tot = Get_sum(rtot) - ha - hb ;
            if(remain_a > remain_tot) {
                cur[remain_a - 1] = 'B' ;
            }
//            cout<<"1: "<<res<<" "<<cur<<endl;
            res = min(res ,cur) ;
        }
//        cout<<"res: "<<res<<endl;
        int last;
        if(attb * rb + atta * rtot == ans) {
            string cur(rtot,'B') ;
//            cout<<"cur: "<<cur<<endl;
            for(int i = rb ; i < rtot; i++) cur[i] = 'A' ;
//            cout<<"cur: "<<cur<<endl;
            ll remain_b = Get_sum(rb) - hb;
            ll remain = remain_b - Get_sum(rtot) + ha + hb;
            for(int i = 0; i < ra ; i++) {
                if(remain_b >= i + 1) {
                    cur[i] = 'A' ;
                    remain_b -= i + 1;
                    remain -= i + 1;
                    last = i ;
                }
            }
            if(remain > 0) {
                cur[last] = 'B';
                cur[last + remain] = 'A' ;
            }
//            cout<<"2: "<<res<<" "<<cur<1<endl;
            res = min(res, cur) ;
        }
        cout << ans << ' ' << res << '\n' ;
    }
    return 0 ;
}
