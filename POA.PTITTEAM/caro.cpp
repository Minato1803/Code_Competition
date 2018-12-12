#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/output.txt", "w", stdout)
#define  mod107			1000000007;

//====================================================================================================

ll n,m;
string caro[105][105];
bool NS(ll i,ll j)
{
	ll Count=0,Count1=0;
	if(i>=5)
		for(ll u=i;u>=i-4;u--)
		{
			if(caro[u][j]=="O")
				Count++;
			else if(caro[u][j]=="X")
			 		Count=0;
			else Count1++;		 	
			if((Count==4&&(caro[u-1][j]=="."||caro[u-1][j]=="O"))||(Count==4&&Count1==1))
				return 1;
		}
		Count=0,Count1=0;
	if(i<=n-4)
		for(ll u=i;u<=i+4;u++)
		{	
			if(caro[u][j]=="O")
				Count++;
			else if(caro[u][j]=="X")
					Count=0;
			else Count1++;			
			if((Count==4&&(caro[u+1][j]=="."||caro[u+1][j]=="O"))||(Count==4&&Count1==1))
				return 1;
		}
	return 0;	
	
}
bool WE(ll i,ll j)
{
	ll Count=0,Count1=0;
	if(j>=5)
		for(ll u=j;u>=j-4;u--)
		{
			if(caro[i][u]=="O")
				Count++;
			else if(caro[i][u]=="X")
			 		Count=0;
			else Count1++;		 	
			if((Count==4&&(caro[i][u-1]=="O"||caro[i][u-1]=="."))||(Count==4&&Count1==1))
				return 1;
		}
		Count=0,Count1=0;
	if(j<=m-4)
		for(ll u=j;u<=j+4;u++)
		{	
			if(caro[i][u]=="O")
				Count++;
			else if(caro[i][u]=="X")
					Count=0;
			else Count1++;			
			if((Count==4&&(caro[i][u+1]=="."||caro[i][u+1]=="."))||(Count==4&&Count1==1))
				return 1;
		}
	return 0;	
}
bool down(ll i,ll j)
{
	if(i<=m-4)
	{
		ll Count=0,Count1=0;
		if(j>=5)
			for(ll u=i,v=j;v>=j-4;v--,u++)
			{
				if(caro[u][v]=="O")
					Count++;
				else if(caro[u][v]=="X")
				 			Count=0;	
				else Count1++; 			
				if((Count==4&&(caro[u+1][v-1]=="."||caro[u+1][v-1]=="O"))||(Count==4&&Count1==1))
					return 1;
			}
			Count=0,Count1=0;
		if(j<=m-4)
			for(ll u=i,v=j;v<=j+4;v++,u++)
			{
				if(caro[u][v]=="O")
					Count++;
				else if(caro[u][v]=="X")
						Count=0;
				else Count1++;			
				if((Count==4&&(caro[u+1][v+1]=="."||caro[u+1][v+1]=="O"))||(Count==4&&Count1==1))
					return 1;
			}
	}
	return 0;
}
bool up(ll i,ll j)
{
	if(i>=5)
	{
		ll Count=0,Count1=0;
		if(j>=5)
			for(ll u=i,v=j;v>=j-4;v--,u--)
			{
				if(caro[u][v]=="O")
					Count++;
				else if(caro[u][v]=="X") 
							Count=0;
				else Count1++;				
				if((Count==4&&(caro[u-1][v-1]=="."||caro[u-1][v-1]=="O"))||(Count==4&&Count1==1))
					return 1;
			}
			Count=0,Count1=0;
		if(j<=m-4)
			for(ll u=i,v=j;v<=j+4;v++,u--)
			{
				if(caro[u][v]=="O")
					Count++;
				else if(caro[u][v]=="X") 
						Count=0;
				else Count1++;			
				if((Count==4&&(caro[u-1][v+1]=="."||caro[u-1][v+1]=="O"))||(Count==4&&Count1==1))
					return 1;
			}
	}
	return 0;
}
void Solves()
{
	cin>>n>>m;
	char c;
	ll Count=0;
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			cin>>c;
			caro[i][j]=c;
			if(c=='.')
				Count++;
		}
	}
	if(Count==1)
	{
		cout<<"yes";
		return;
	}
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			if(NS(i,j)||up(i,j)||WE(i,j)||down(i,j))
			{
				cout<<"yes";
				return;
			}
		}
	}
	cout<<"no";
}

int main()
{
    buff;
//    Input;
//    Output;
    Solves();
    return 0;
}
