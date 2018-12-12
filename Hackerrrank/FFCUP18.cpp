#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output2.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================
ll A[5],B[5];

void Solves()
{
		cin>>A[0]>>B[0]>>B[1]>>A[1];
		if(B[0]+B[1]>A[0]+A[1])
			cout<<"B wins"<<endl;
		else
		{
			if(B[0]+B[1]<A[0]+A[1])
				cout<<"A wins"<<endl;
			else
			{
				if(B[0]==A[1])
					cout<<"Extra time"<<endl;
				else
				{
					if(B[0]>A[1])
						cout<<"B wins"<<endl;
					else		
					cout<<"A wins"<<endl;
				}		
			}
		}			
}

int main()
{
    buff;
    //Input;
//    Output;
    Solves();
    return 0;
}
