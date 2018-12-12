#include<iostream>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 int main()
 {
 	ll T ;
 	cin>>T;
 	ll *a= new ll[T];
 	for(int i=0;i<T;i++){
 		cin>>a[i];
	 }
	for(int i=0;i<T;i++){
 		cout<<fixed<<setprecision(5)<<sqrt(a[i])<<endl;
	 }
	delete[] a;
	return 0;  
 }
