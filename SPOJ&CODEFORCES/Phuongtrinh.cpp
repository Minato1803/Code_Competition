#include <bits/stdc++.h>
using namespace std;
#define ll double
void gpt1(ll b,ll c){
	cout<<1<<endl;
	cout<<fixed<<setprecision(5)<<-c/b;
}

void gptb2(ll a,ll b,ll c){
	ll denta=b*b-4*a*c;
	if(denta<0) cout<<0;
	else if(denta==0){
	cout<<1<<endl;
	cout<<fixed<<setprecision(5)<<((-1)*b)/(2*a);
}
	else {
		ll t=sqrt(denta);
		cout<<2<<endl;
		cout<<fixed<<setprecision(5)<<(-b-t)/(2*a)<<endl;
		cout<<fixed<<setprecision(5)<<(-b+t)/(2*a);
	}
	 
}
 
int main()
{
ll a,b,c;
cin>>a>>b>>c;
if((a==0&&b!=0&&c!=0)||(a==0&&b!=0&&c==0)) gpt1(b,c);
else if(a==0&&b==0&&c==0) cout<<-1;
else if(a==0&&b==0&&c!=0) cout<<0;
else gptb2(a,b,c);
 
	return 0;
} 
