#include<stdio.h>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;
 
void palin(char *x,int n)
{
    for(char *p=x+1,*q=x+n;p<q;*q--=*p++);
}
 
void succ(char *y,int n)
{
    int k=(n+1)/2;
    int res=1;
    for(char *p=y+k;p>y;p--)
    {
        res+=*p-'0';
        *p=res%10+'0';
		cout<<*p<<" "<<res<<endl;        
        res/=10;
        if(res==0){palin(y,n); printf("%s\n",y+1);return;}
    }
    for(int i=1;i<=n;i++) y[i]='0';
    y[0]=y[n]='1';  
    printf("%s\n",y);
}
 
int main()
{
    char x[1000005],y[1000005],*p;
    int t;
    scanf("%d",&t); 
    while(t>0)
    {
    scanf("%s",x);
    int n=strlen(x);
    strcpy(y+2,x);
    palin(y+1,n);
    cout<<y+2<<endl;
    if(strcmp(x,y+2)>=0) {p=y+1,succ(p,n);}
    else printf("%s\n",y+2);        
    t--;
    }
}

