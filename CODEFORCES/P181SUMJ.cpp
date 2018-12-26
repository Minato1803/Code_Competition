#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll chia(ll A, ll B)
{ 
	ll s=1;
	for(ll i=A+1; i<=B;i++){
    	phantich(i);
      }
	return s;
}
void phantich(ll N,ll k)
{
	for(ll i=2;i<=N;i++){
		if(kt(N,i)==1){
			ll dem=0;
			loop: if(N%i==0){
		           dem+=1;
		           N=N/i;
		           goto loop;
				  }
			a[]=i; b[]=dem;	  
		}
	}
}

bool kt(ll N,ll i)
{ while(i<N){
	if(i==2){return 1;}
	for(ll j=2;j<i;j++){
		if(i%j==0){return 0 ;}	
		}
	return 1;	
		}
}

ll Uoc(ll N)
{
	ll i=2;
	while (i*i<=n){
	if (n%i==0){
		ll a=0;
	while (n%i==0){
		N= N/i;
		Uoc(a);
end;
}


int main()
{
	ll T,A,B;
	cin>>T;
	for(ll i=0;i<T;i++){
		cin>>A>>B;
		cout<< chia(A,B)<<endl;
	}
	return 0;
}
