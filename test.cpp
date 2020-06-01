#include <bits/stdc++.h>
#include <stack>
using namespace std;

#define  ll             long long

#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


   vector <char> mathh;
	vector <ll> num;

ll easyExpression(string str)
{
    
    ll dig = 0;
    ll Count = 0;
	for(ll i=str.length()-1;i>=0;i--)
	{
        
		if(str[i]>=48&&str[i]<=57)
		{
            int digit = str[i] - 48;
            dig += pow(10,Count)*digit;
			Count++;
		}	
		else
		{
//			cout<<dig<<"****"<<endl;
            num.push_back(dig);
            dig = 0;
            Count = 0;
		    mathh.push_back(str[i]);
		}
	}
     num.push_back(dig);
	
	while(mathh.size()!= 0)
	{
		ll a = num[num.size()-1];
        num.pop_back();
		ll b= num[num.size()-1];
        num.pop_back();
		char t = mathh[mathh.size()-1];
        mathh.pop_back();
        cout<<a<<" "<<b<<" "<<t<<endl;
        ll result = 0;
        	if(t==42)
		        result = a*b;
	        else
                if(t==45)
		        result = a-b;	
	        else
                if(t==43)
		        result = a+b;
            else	
	            if(t==47)
		        result = a/b;	
			num.push_back(result);
	}
        ll deohieu = num[num.size()-1];
	return deohieu;
}

int main()
{
	string str;
	cin>>str;
	cout<<easyExpression(str);
}
