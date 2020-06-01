#include <bits/stdc++.h>
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

//====================================================================================================

//-----------------------------
long long H(long long previousHash, string &transaction,
            long long token) {
  long long v = previousHash;
  for (int i = 0; i < transaction.length(); i++) {
    v = (v * 31 + transaction[i]) % 1000000007;
  }
  return (v * 7 + token) % 1000000007;
}

ll cretoken(ll previousHash, ll preHash,string &s)
{
	long long v = previousHash;
  for (int i = 0; i < s.length(); i++) {
    v = (v * 31 + s[i]) % 1000000007;
  }
  return (preHash - (v * 7) % 1000000007)% 1000000007;
}

void Solves()
{
	ll n = 140000000;
	string s1 = "charlie-pays-to-eve-9-sg-coins";
	string s2 = "icpc-sg-2018-at-nus";
	ll Hash = H(n,s1,218216710);
	ll token = cretoken(n,Hash,s1);
	cout<<token;
//	cout<<H(H(n,s1,218216710),s1,cretoken(H(n,s1,218216710),s1));
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
