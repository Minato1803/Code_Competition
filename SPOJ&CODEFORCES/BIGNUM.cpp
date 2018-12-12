#include<iostream>
#include<string.h>
using namespace std;

int charToInt(char a)
{
	int result = (int) a - 48;
	return result;
}

char intToChar(int a)
{
	char result = a + 48;
	return result;
}

void canbang(string &a, string &b)
{   
	int l1 = a.length();
	int l2 = b.length();
    b.insert(0, l1-l2, '0');
}
	void sub(string a, string b)
	{ 	canbang(a,b);
		string t;
	char temp;
		for(int i=a.length()-1; i>=0;i--){
    		if(charToInt(a[i])<charToInt(b[i])){
    			temp=charToInt(a[i])+charToInt('10')-charToInt(b[i]);
    			b[i-1]=charToInt(b[i-1])+charToInt('1');
    			t.insert(0,1,intToChar(temp));
			}
			else {temp=charToInt(a[i])-charToInt(b[i]);
					t.insert(0,1,intToChar(temp));}
		}
		for(int i=0;i<t.length();i++){
			cout<<t[i];
		}
	}

int main()
{
	string a,b;
	cin>>a>>b;
	
	if(a.length()<b.length()||(a.length()==b.length()&&b[0]>a[0])){
	cout<<"-";sub(b,a);}
	else
	sub(a,b);
	return 0;
}
