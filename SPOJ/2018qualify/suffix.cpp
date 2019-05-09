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

struct Node
{
    char ch;
    unordered_map<char, Node*> children;
    vector<int> indexes; 
    Node(char c):ch(c){}
};

int maxLen = 0;
string maxStr = "";
string ans="";

void insertInSuffixTree(Node* root, string str, int index, string originalSuffix, int level=0)
{
    root->indexes.push_back(index);

    if(root->indexes.size() > 1 && maxLen <= level)
    {
        maxLen = level;
		maxStr = originalSuffix.substr(0, level);	
    }
	if( ans <= maxStr || ans.length() <= maxStr.length() || ans.length()==0 )
	{
		ans=maxStr;
	}
    if(str.empty()) return;

    Node* child;
    if(root->children.count(str[0]) == 0) {
        child = new Node(str[0]);
        root->children[str[0]] = child;
    } else {
        child = root->children[str[0]];
    }

    insertInSuffixTree(child, str.substr(1), index, originalSuffix, level+1);
}

int main()
{
    string str = "aaaddcccdddedddaaaccc"; // output aaa
    Node* root = new  Node('@');

    //insert all substring in suffix tree
    for(int i=0; i<str.size(); i++){
        string s = str.substr(i);
        insertInSuffixTree(root, s, i, s);
    }

    cout<< ans << endl;

    return 0;
}

