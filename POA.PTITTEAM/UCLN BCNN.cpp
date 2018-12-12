#include<iostream>
using namespace std;

long ucln(long a,long b)
{ long d;
    while(b!=0){
        d=a%b;
        a=b;
        b=d;
    }
    return a;
}


int main()
{   long a[10000];
    long b[10000];
    long dem=0;
    do
    {
        dem++;
        cin>>a[dem]>>b[dem];
    }while(a[dem]!=0 || b[dem]!=0);
    for(int i=1;i<dem;i++)
    {
        long u=ucln(a[i],b[i]);
        long bcnn= a[i]*b[i]/u;
        cout<<u<<" "<<bcnn<<endl;
    }
    return 0;
}

