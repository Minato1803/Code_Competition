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
ll n;
long db hz;
vector <ll> fre;
pair<string, map<ll,string> > pitch[5];
//-----------------------------
void Solves()
{
	
	pitch[0].first = "G major";
	pitch[0].second = {{10,"G"}, {0,"A"},{2,"B"},{3,"C"},{5,"D"},{7,"E"},{9,"F#"}};
	pitch[1].first = "C major";
	pitch[1].second = {{3,"C"}, {5,"D"},{7,"E"},{8,"F"},{10,"G"},{0,"A"},{2,"B"}};
	pitch[2].first = "Eb major";
	pitch[2].second = {{6,"Eb"}, {8,"F"},{10,"G"},{11,"Ab"},{1,"Bb"},{3,"C"},{5,"D"}};
	pitch[3].first = "F# minor";
	pitch[3].second = {{9,"F#"}, {11,"G#"},{0,"A"},{2,"B"},{4,"C#"},{5,"D"},{7,"E"}};
	pitch[4].first = "G minor";
	pitch[4].second = {{10,"G"}, {0,"A"},{1,"Bb"},{3,"C"},{5,"D"},{6,"Eb"},{8,"F"}};
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>hz;
		hz/= 440.0;
		while(hz >= 2.0000000)
		{
			hz /= 2;
 		}
 		while(hz < 1.00000000)
 		{
 			hz*=2;
		}
		ll tmp = log2((long db) hz +0.0001)*12.0;
//		cout<<fix_set(10000)<<tmp<<endl;
		fre.pb(tmp);
	}
//	for(ll i=0;i<fre.size();i++)
//	{
//		cout<<fre[i]<<endl;
//	}
//	cout<<pitch[0].second.find(7)->second<<endl;
	ll key = 0;
	ll Count = 0;
	for(ll i = 0;i<5;i++)
	{
		loop:
			if(i>=5)
				break;
		for(ll j = 0;j< fre.size();j++)
		{
			if(pitch[i].second.find(fre[j]) == pitch[i].second.end())
			{
//				cout<<fix_set(18)<<i<<" "<<fre[j]<<endl;
				i++;
				goto loop;
			}
		}
		key = i;
		Count++;
		
	}
//	cout<<key<<endl;
	if(Count == 1)
	{
		cout<<pitch[key].first<<endl;
		for(ll i = 0;i <fre.size();i++)
		{
//			cout<<fre[i]<<endl;
			cout<<pitch[key].second.find(fre[i])->second<<endl;
		}
	}
	else
	{
		cout<<"cannot determine key"<<endl;
	}
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
