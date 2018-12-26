#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	ll n;
	cin>>n;
	ll la,lb;
	vector <ll> a;
	vector <ll> b;
	ll suma=0,sumb=0;
	// listscore of A
	for(ll i=0;i<n;i++)
	{
		cin>>la;
		a.push_back(la);
		suma+=la;
	}
	sort(a.begin(),a.end());
	//listscore of B
	for(ll i=0;i<n;i++)
	{
		cin>>lb;
		b.push_back(lb);
		sumb+=lb;
	}
	sort(b.begin(),b.end());
//	for(ll i=0;i<a.size();i++) cout<<a[i]<<" ";
//	cout<<endl;

	ll scoreA=0,scoreB=0;
	while(suma>0||sumb>0)
	{
		// turn a
		if(a.size()>0&&b.size()==0)
			goto adda;
		if(a.size()==0&&b.size()>0)
			goto subb;
		if(a.size()>0&&a.back()>=b.back())
		{
			adda:
			scoreA+=a.back();
			suma-=a.back();
			a.pop_back();
		}
		else
		{
			subb:
			sumb-=b.back();
			b.pop_back();
		}
		// turn b;	
		if(b.size()>0&&a.size()==0)
			goto addb;
		if(b.size()==0&&a.size()>0)
			goto suba;	
		if(b.back()>=a.back())
		{
			addb:
			scoreB+=b.back();
			sumb-=b.back();
			b.pop_back();
		}
		else
		{
			suba:
			suma-=a.back();
			a.pop_back();
		}
		
	}
//	cout<<scoreA<<" "<<scoreB<<endl;
	cout<<scoreA-scoreB;
	return 0;
}
