#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	ll n;
	cin>>n;
	string s[6]= {"Sheldon","Leonard","Penny","Rajesh","Howard"};
	if(n<6){
        cout<<s[n-1];
        return 0;
    }
	ll  a= 5;
	ll  i= 1;
	loop:
		n= n-i*5;
		i= i*2;
	if(i*5<n){
		goto loop;
	}

	cout<< s[(n-1) / i] << endl;
    return 0;
}
