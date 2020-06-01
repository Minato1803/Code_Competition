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

void Solves()
{
	int n,q;
cin >> n >> q;
cin.ignore();

map <string,string> attributeDB; // to store attribute-value pairs
string inputstr,tag_preamble="";

// get each HRML line
for (int i=0;i<n;i++) {
    getline(cin,inputstr);    

    // for each HRML line, break it up into token words
    stringstream ss(inputstr);
    string word, attribute, value;
    size_t pos;
    while (getline(ss, word, ' ')) { // for each token word
        // tag detected -> adjust tag_preamble by +/- tag
        if (word[0]=='<') {
            string tag;
            if (word[1]=='/') { // it's tag closing
                tag=word.substr(2);   
                tag=tag.substr(0,tag.length()-1); // rid of ">"
                pos=tag_preamble.find("."+tag);
                if (pos==string::npos) tag_preamble="";
                else tag_preamble=tag_preamble.substr(0,pos);
            }
            else { // it's tag opening
                tag=word.substr(1);
                if (tag.find(">")!=string::npos) 
                tag=tag.substr(0,tag.length()-1); // rid of ">"
                if (tag_preamble=="") tag_preamble=tag;
                else tag_preamble=tag_preamble+"."+tag;
            }
        }
        // value detected
        else if (word[0]=='"') {
            pos=word.find_last_of('"');
            value=word.substr(1,pos-1);
            cout<<attribute<<" "<<value<<"****"<<endl;
            attributeDB[attribute]=value; // insert into DB
        }
        // attribute name detected
        else if (word[0]!='=') {
            attribute=tag_preamble + "~" + word;  
        }
    }
}

// now we process the queries
for (int i=0;i<q;i++) {
    getline(cin,inputstr); 
    if (attributeDB.find(inputstr)==attributeDB.end())
        cout << "Not Found!" << endl;
    else
        cout << attributeDB[inputstr] << endl;
}
	
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
