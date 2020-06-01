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
string s;
map <char, ll> suit;
//-----------------------------

void Solves()
{
	cin>>s;
	for(ll i=0;i<s.length();i+=3)
	{
		string card;
		card = s.substr(i,3);
		if(s.rfind(card) != -1 && s.rfind(card) != i)
		{
			cout<<"GRESKA"<<endl;
			return;
		}
		else
		{
			suit[card[0]] ++;
		}
	}
	cout<<13 - suit['P']<<" "<<13 - suit['K']<<" "<<13 - suit['H']<<" "<<13 - suit['T']<<endl;
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
