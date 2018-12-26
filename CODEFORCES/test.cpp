#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll a[101][101]; 
ll truoc[101];
ll n, m, Free[101], u, v, x, y;
 
void DFS(ll u)
{
	Free[u] = false;
    for (ll v = 1; v <= n; v++)
        if (a[u][v]==1 && Free[v]== true)
        {		truoc[v]=u;
			    DFS(v);}


}
void kq(void)
{
	if( truoc[y]==0){
		cout<<"no"<<endl; return ;
	}
		else cout<<"yes"<<endl;
} 
 
int main()
{
    ll t;
    cin>>t;
    loop:
	cin>>n>>m>>x>>y;
    for (ll i=1; i<=n; i++)
        for (ll j=1; j<=n; j++)
            a[i][j]= 0;
 
    for (ll i=1; i<=m; i++)
    {
        cin>>u>>v;
        a[u][v]= 1;
        a[v][u]= 1;
    }
 
    for (ll i=1; i<=n;i++){
        Free[i]= true;
		truoc[i]= 0;}
    	DFS(x);
    	kq();
    	if(t>1){
    		t-=1; goto loop;}
    return 0;
}
