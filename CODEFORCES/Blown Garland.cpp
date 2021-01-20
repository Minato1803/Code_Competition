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
string s;
ll r = 0,b = 0, y = 0, g = 0;
//-----------------------------
void Solves()
{
	cin>>s;
	ll posR = -1, posB = -1,posY =-1, posG = -1; 
	for(ll i = 0;i<s.length();i++)
	{
		if(s[i] == 'R' && posR == -1)
			posR = (i+1)% 4; 
		if(s[i] == 'B' && posB == -1)
			posB = (i+1)% 4;		
		if(s[i] == 'Y' && posY == -1)
			posY = (i+1)% 4;
		if(s[i] == 'G' && posG == -1)
			posG = (i+1)% 4;
		if(posR != -1 && posB != -1 &&posY != -1 &&posG != -1)
			break;	
	}
	for(ll i = 0;i<s.length();i++)
	{
		if(s[i] == '!' && (i+1)%4 == posR)
		{
			r++;
		}
		if(s[i] == '!' && (i+1)%4 == posB)
		{
			b++;
		}
		if(s[i] == '!' && (i+1)%4 == posY)
		{
			y++;
		}
		if(s[i] == '!' && (i+1)%4 == posG)
		{
			g++;
		}
	}
	cout<<r<<" "<<b<<" "<<y<<" "<<g<<endl;
	
	
}


int main()
{
    buff;
   /* Input;
    Output;*/
    
    /*clock_t start, end;
    	double time_use;
    start = clock();
    	Solves();
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%f seconds", time_use);*/
    
    Solves();


    return 0;
}
