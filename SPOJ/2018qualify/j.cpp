#include<bits/stdc++.h> 
using namespace std; 
  
#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

string s;
ll suffix[10005][10005];

void Solves()
{  
	cin>>s;                            
    ms(suffix, 0); 
    string ans;  
  	ll len = 0,it = 0;  
    for (ll i=1; i<=s.length(); i++) 
    { 
        for (ll j=i+1; j<=s.length(); j++) 
        { 
            if (s[i-1] == s[j-1]) 
            { 
                suffix[i][j] = suffix[i-1][j-1] + 1; 

                if (suffix[i][j] > len) 
                { 
                    len = suffix[i][j]; 
                    it = max(i, it); 
                } 
            } 
            else
               suffix[i][j] = 0; 
        } 
    } 
    if (len > 0) 
        for (ll i = it - len + 1; i <= it; i++) 
            ans+=s[i-1]; 
  
    cout<<ans; 
}

int main()
{
    buff;
//    Input;
//    Output;
//    clock_t start, end;
//    	double time_use;
//    start = clock();
//    	Solves();
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("%f seconds", time_use);
    Solves();
    return 0;
}
