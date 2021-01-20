#include <bits/stdc++.h>
using namespace std;

#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  ll             long long
#define  db             double
#define	 fst			first
#define	 snd			second
#define  pb				push_back
#define  mp				make_pair
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  fix_set(x)     fixed<<setprecision(x)
#define  all(x)         (x).begin(), (x).end()
#define  allArr(x,n)	x, x+n
#define  vp(x,y)		vector< pair<x,y> >
#define  testCase		ll t; cin>>t; while(t--)
#define  flr(i,x,n)		for(long long i = (x); i<(n); ++i)
#define  frl(i,n,x)		for(long long i = (n); i>=(x); --i)
#define  filr(it,x)		for(it = (x).begin(); it!=(x).end(); it++)
#define  firl(it,x)		for(it = (x).rbegin(); it!=(x).rend(); it++)
# define M_PI           3.14159265358979323846

ll const INF = 1e18;
ll const Base = 1;
inline ll mod(string num, ll a);
inline ll diMod(ll A, ll B);
inline ll fpow(ll a,ll x);
inline bool cmpArr(ll a, ll b);
//====================================================================================================
db xa,ya,xb,yb,xc,yc;
db za,zb,zc;
db ansx,ansy,ansz;
//-----------------------------
db rotationMatrix[4][4];
db inputMatrix[4][1] = {0.0, 0.0, 0.0, 0.0};
db outputMatrix[4][1] = {0.0, 0.0, 0.0, 0.0}; 
db sum[3][1] = {0.0, 0.0, 0.0}
 
void showPoint(){
    cout<<"("<<outputMatrix[0][0]<<","<<outputMatrix[1][0]<<","<<outputMatrix[2][0]<<")"<<endl;
} 
 
void multiplyMatrix()
{
    for(int i = 0; i < 4; i++ ){
        for(int j = 0; j < 1; j++){
            outputMatrix[i][j] = 0;
            for(int k = 0; k < 4; k++){
                outputMatrix[i][j] += rotationMatrix[i][k] * inputMatrix[k][j];
            }
        }
    }
}
void setUpRotationMatrix(db angle, db u, db v, db w)
{
    db L = (u*u + v * v + w * w);
    db u2 = u * u;
    db v2 = v * v;
    db w2 = w * w; 
 
    rotationMatrix[0][0] = (u2 + (v2 + w2) * cos(angle)) / L;
    rotationMatrix[0][1] = (u * v * (1 - cos(angle)) - w * sqrt(L) * sin(angle)) / L;
    rotationMatrix[0][2] = (u * w * (1 - cos(angle)) + v * sqrt(L) * sin(angle)) / L;
    rotationMatrix[0][3] = 0.0; 
 
    rotationMatrix[1][0] = (u * v * (1 - cos(angle)) + w * sqrt(L) * sin(angle)) / L;
    rotationMatrix[1][1] = (v2 + (u2 + w2) * cos(angle)) / L;
    rotationMatrix[1][2] = (v * w * (1 - cos(angle)) - u * sqrt(L) * sin(angle)) / L;
    rotationMatrix[1][3] = 0.0; 
 
    rotationMatrix[2][0] = (u * w * (1 - cos(angle)) - v * sqrt(L) * sin(angle)) / L;
    rotationMatrix[2][1] = (v * w * (1 - cos(angle)) + u * sqrt(L) * sin(angle)) / L;
    rotationMatrix[2][2] = (w2 + (u2 + v2) * cos(angle)) / L;
    rotationMatrix[2][3] = 0.0; 
 
    rotationMatrix[3][0] = 0.0;
    rotationMatrix[3][1] = 0.0;
    rotationMatrix[3][2] = 0.0;
    rotationMatrix[3][3] = 1.0;
    
    sum[0][0]  = u
} 
 
void Solves()
{
	testCase
	{
		cin>>xa>>ya>>xb>>yb>>xc>>yc;
		cin>>za>>zb>>zc;
	
	    inputMatrix[0][0] = xa;
	    inputMatrix[1][0] = ya;
	    inputMatrix[2][0] = za;
	    inputMatrix[3][0] = 1.0; 
	
		db px = (yb*zc) - (yc*zb);
		db py = (zb*xc) - (xb*zc);
		db pz = (xb*yc) - (xc*yb); 
	
		db angle = acos(((xb*xc + yb*yc+zb*zc)*1.0)/(sqrt(xb*xb+yb*yb+zb*zb)*(sqrt(xc*xc+yc*yc+zc*zc))));
	 
//	    setUpRotationMatrix(angle,px, py, pz);
//	    multiplyMatrix();
//	    showPoint();
		db tmpx = xa*cos(angle) - ya*sin(angle);
		db tmppx = tmpx*cos(angle) + za*sin(angle);
		cout<<tmppx<<endl; 
	}
}

int main()
{
    buff;
  Input;
//  Output;
    
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

//====================================================================================================

inline ll mod(string num, ll a) 
{ 
	// tinh string % a
    ll res = 0; 
    flr(i,0, num.length()) 
         res = (res*10 + (ll) num[i] - '0') %a;
    return res; 
} 
 
inline ll fpow(ll a,ll x)
{
	 //tinh (a^x) % Base
	if(x==0)return 1;	
	if(x&1) 
	{
		return a*fpow(a,x-1)%Base;
	} 
	else
	{
		ll t=fpow(a,x/2);
		return t*t%Base;
	}
}
 
inline ll diMod(ll A, ll B)
{
	//tinh (A/B) % Base
	ll result = (A * fpow(B, Base-2)) % Base; 
	return result;
}

inline bool cmpArr(ll a, ll b)
{
	return a>b;
}
