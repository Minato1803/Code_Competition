#include <iostream>
using namespace std;
int main()
{ int N,M,a,b;
cin>>N>>M;
if(N<M){cout<<"IMPOSSIBLE"; return 0;}
if((N-2*M)%3!=0){cout<<"IMPOSSIBLE"; return 0;}
b=(N-2*M)/3;
a=M+b;
if(a<=0||b<=0){cout<<"IMPOSSIBLE"; return 0;}
cout<<a<<endl<<b;
return 0;
}
