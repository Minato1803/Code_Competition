#include <bits/stdc++.h> 
using namespace std; 
  
int reversals(std::string exp)
{
    stack <char> brac;
    int CountBef = 0, CountAft = 0,ans = 0;
    CountBef = exp.find('{');
    for(int i = exp.find('{');i<exp.length();i++)
    {
        if(exp[i] == '{')
        {
            brac.push(exp[i]);
        }
        if(exp[i]=='}')
        {
            if(!brac.empty())
                brac.pop();
            else
            {
                CountAft++;
            }
                    
        }
    }
    if(CountBef % 2 != 0 && (CountAft == 0 && brac.size()==0)
    || CountAft % 2 != 0 && (CountBef == 0 && brac.size()==0)
    || brac.size() % 2 != 0 && (CountAft == 0 && CountBef==0))
    {
        return -1;
    }
    ans = ((CountBef>=2?(CountBef+1)/2:CountBef) + 
            (CountAft>=2?(CountAft+1)/2:CountAft) + 
            (brac.size()>=2?(brac.size()+1)/2:brac.size()));
    return ans;
}
 
int main() 
{ 
    string s = "{}}";
    int ans = reversals(s);
  	cout<<ans;
    return 0; 
} 
