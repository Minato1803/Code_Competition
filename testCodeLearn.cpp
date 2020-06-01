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

std::vector<int> removeElements(std::vector<int> arr, int k)
{
    int Count = 0;
    stack <int> listNum;
    listNum.push(arr[0]);
    for(int i = 0;i<arr.size();i++)
    {
        if(Count <= k)
        {
            if(arr[i]< listNum.top())
            {
                Count++;
                continue;
            }
            if(listNum.top() <= arr[i])
            {
                listNum.pop();
                Count++;
            }
        }    
            listNum.push(arr[i]);    
    }
    vector<int> ans;
    while(!listNum.empty())
    {
        ans.push_back(listNum.top());
        listNum.pop();
    }
    vector<int> fin(ans.rbegin(), ans.rend());
    return fin;
}


int main()
{
	string s ="codelearn";
	cout<<modifyString(s)<<endl;
	return 0;
}
