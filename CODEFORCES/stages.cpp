#include <bits/stdc++.h>
using namespace std;
#define ll long long

int chuyen (char a)
{
	return (int)a-96;
}

int main()
{
	ll n, k,sum=0;
	cin>>n>>k;
	string s;
	cin>>s;
		if(s.find("a")!=-1&&k>0){
			sum+=chuyen(s[s.find("a")]); k-=1; goto c;
		}
		if(s.find("b")!=-1&&k>0){
			sum+=chuyen(s[s.find("b")]); k-=1; goto d;
		}
		c: if(s.find("c")!=-1&&k>0){
			sum+=chuyen(s[s.find("c")]); k-=1; goto e;
		}
		d: if(s.find("d")!=-1&&k>0){
			sum+=chuyen(s[s.find("d")]); k-=1; goto f;
		}
		e: if(s.find("e")!=-1&&k>0){
			sum+=chuyen(s[s.find("e")]); k-=1; goto g;
		}
		f:if(s.find("f")!=-1&&k>0){
			sum+=chuyen(s[s.find("f")]); k-=1; goto h;
		}
		g: if(s.find("g")!=-1&&k>0){
			sum+=chuyen(s[s.find("g")]); k-=1; goto i;
		}
		h: if(s.find("h")!=-1&&k>0){
			sum+=chuyen(s[s.find("h")]); k-=1; goto j;
		}
		i: if(s.find("i")!=-1&&k>0){
			sum+=chuyen(s[s.find("i")]); k-=1; goto k;
		}
		j: if(s.find("j")!=-1&&k>0){
			sum+=chuyen(s[s.find("j")]); k-=1; goto l;
		}
		k: if(s.find("k")!=-1&&k>0){
			sum+=chuyen(s[s.find("k")]); k-=1; goto m;
		}
		l: if(s.find("l")!=-1&&k>0){
			sum+=chuyen(s[s.find("l")]); k-=1; goto n;
		}
		m: if(s.find("m")!=-1&&k>0){
			sum+=chuyen(s[s.find("m")]); k-=1; goto o;
		}
		n: if(s.find("n")!=-1&&k>0){
			sum+=chuyen(s[s.find("n")]); k-=1; goto p;
		}
		o: if(s.find("o")!=-1&&k>0){
			sum+=chuyen(s[s.find("o")]); k-=1; goto q;
		}
		p: if(s.find("p")!=-1&&k>0){
			sum+=chuyen(s[s.find("p")]); k-=1; goto r;
		}
		q: if(s.find("q")!=-1&&k>0){
			sum+=chuyen(s[s.find("q")]); k-=1; goto s;
		}
		r: if(s.find("r")!=-1&&k>0){
			sum+=chuyen(s[s.find("r")]); k-=1; goto t;
		}
		s: if(s.find("s")!=-1&&k>0){
			sum+=chuyen(s[s.find("s")]); k-=1; goto u;
		}
		t: if(s.find("t")!=-1&&k>0){
			sum+=chuyen(s[s.find("t")]); k-=1; goto v;
		}
		u: if(s.find("u")!=-1&&k>0){
			sum+=chuyen(s[s.find("u")]); k-=1; goto w;
		}
		v: if(s.find("v")!=-1&&k>0){
			sum+=chuyen(s[s.find("v")]); k-=1; goto x;
		}
		w: if(s.find("w")!=-1&&k>0){
			sum+=chuyen(s[s.find("w")]); k-=1; goto y;
		}
		x: if(s.find("x")!=-1&&k>0){
			sum+=chuyen(s[s.find("x")]); k-=1; goto z;
		}
		y: if(s.find("y")!=-1&&k>0){
			sum+=chuyen(s[s.find("y")]); k-=1; goto loop;
		}
		z: if(s.find("z")!=-1&&k>0){
			sum+=chuyen(s[s.find("z")]); k-=1;
		}
		
		loop: if(k==0){
				cout<<sum;
		}
		if(k>0){
			cout<<"-1";}
		
	return 0;
}
