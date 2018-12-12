#include <bits/stdc++.h>
using namespace std;
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define ll long long
#define max 1000005

bool ktt[1000005];
ll result[1000005];

ll kt(ll L, ll R)
{
	ll s=0;
	memset(ktt,0,R);
	if(((R&1)==0)||((L&1)==0))
			s+=(R-L+2);
	else
			s+=(R-L);
	for(ll i=3;i<=R;i+=2)
	{
		if(ktt[i]==1)
			continue;
		if (((i&1)==1)&&ktt[i]==0&&i>=L)
			s+=i;
		for(ll j=i*3;j<=R;j+=i*2)
		{	
			if(((j&1)==1)&&j>=L&&ktt[j]==0)
				s+=i;
			ktt[j]=1;
		}	
	}
	return s;
//	printf("%lld",s);
//	printf("\n");
}

int main()
{
//	buff;
//	Input;
	for(ll i=2;i<=1000000;i++)
	{
		result[i] = kt(2,i);
	}
	ll q,L,R;
	scanf("%lld", &q);
	
	for(ll i=0;i<q;i++)
	{
		scanf("%lld%lld",&L,&R);
		cout<<result[R]-result[L];
//		kt(L,R);
	}
	return 0;
	
}
    
