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

//-----------------------------
long long calc(long long a, long long b)
{
	return sqrt((a-b)*(a-b));
}
void Solves()
{
	vector <int> a,b;
	a= {1,1,2,2};
	b = {2,2,6,4}; 
	long long SA = calc(a[0],a[2]) * calc(a[1], a[3]);
	long long SB = calc(b[0],b[2])*calc(b[1], b[3]);
	long long tmp[5] = {0};
	bool check =1;
	if(a[0] < b[0])
	{
		if(a[2] > b[0])
		{
			tmp[0] = b[0];
			if(a[2] <= b[2] )
			{
				tmp[2] = a[2];
			}
			else
			{
				tmp[2] = b[2];
			}
		}
		else
			check = 0;	
	}
	else
	{
		if(b[2] < a[0])
		{
			tmp[0] = b[0];
			if(a[2] <= b[2] )
			{
				tmp[2] = a[2];
			}
			else
			{
				tmp[2] = b[2];
			}
		}
		else
			check = 0; 
	}
	
	if(a[1] < b[1])
	{
		if(a[3] > b[1])
		{
			tmp[1] = b[1];
			if(a[3] <= b[3] )
			{
				tmp[3] = a[3];
			}
			else
			{
				tmp[3] = b[3];
			}
		}
		else
			check = 0;	
	}
	else
	{
		if(b[3] < a[1])
		{
			tmp[1] = b[1];
			if(a[3] <= b[3] )
			{
				tmp[3] = a[3];
			}
			else
			{
				tmp[3] = b[3];
			}
		}
		else
			check = 0; 
	}
	long long ST  = 0;
	long long result = 0;
	cout<<SA<<" "<<SB<<endl;
	if(check == 1)
	{
		long long ST = calc(tmp[0],tmp[2]) * calc(tmp[1], tmp[3]);
		result = SA+SB-ST*2;
	}
	else
	{
		if(b[0] == a[0] &&b[1] == a[1] &&b[2] == a[2] &&b[3] == a[3])
			return 0;
//cout<<0;
		else
			return SA+SB
//cout<<SA+SB;	
			
	}
	return result;
//	cout<< result<<endl;
	
}

int main()
{
    buff;
//    Input;
//    Output;
//    clock_t start, end;
//    	double time_use;
//    start = clock();
//    	Solves();
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("%f seconds", time_use);
    Solves();
    return 0;
}
