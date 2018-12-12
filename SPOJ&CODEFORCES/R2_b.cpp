#include<iostream>
#include <vector>
#include <string.h>
using namespace std;
#define ll long long
int main()
{	vector <ll> A;
	ll Q,x,p,a;
	cin>>Q;
	for(ll i=0;i<Q; i++){
		cin>>a;
			if(a==1){
				cin>> x; 
				A.push_back(x);
			}
	    	if(a==2){
				if(!A.empty()){
				A.pop_back();}
			}
			if(a==3){
				cin>>p;
				if(A.size()>=p){
				A.erase(A.begin()+p-1);}
			}
			if(a==4){
				cin>>p>>x;
				if(A.size()>=p){
				A.insert (A.begin()+p-1,x);} 
			}
			if(a==5){
				cout<<A.size()<<" ";
				for (int i=0;i<A.size();++i){
				cout << A[i] <<" ";}
				cout<<endl;	 
			}
			if (a==6){
				A.clear();
			}
	}
		
	return 0;
}
