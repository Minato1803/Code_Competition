#include <bits/stdc++.h>
using namespace std;

int slot[11] = {0}, X[10] = {0};
int n, no = 0;
int ans = -1;
bool Prime[10000005] ={0};
vector <long long> Primes;
void isPrime()
{
    Prime[0] = 1;
    Prime[1] = 1;
    for(long long i = 2;i*i<=10000000;i++)
    {
        if(Prime[i] == 0)
        {
        	Primes.push_back(i);
            for(long long j = i*2; j<= 10000000;j+=i)
            { 
                Prime[j]= 1;
            }
    	}
    }
}

bool check(int num)
{
//        for (int i = sqrt(num); i >= 2; i--)
//        {
//            if (num%i == 0)
//                return false;
//        }
//        return true;
	for(long long i= 0;i<Primes.size();i++)
	{
		if(num % Primes[i] == 0)
		{
			return 0;
		}
	}
	return 1;
}


void Try(int i)
{
    if (i == n)
    {
        if(floor(log10(no)+1) > 7)
        {
            if (no>ans && check(no))
            {
                ans = max(ans, no);
            }
        }
        else
        {
            if(Prime[no] == 0)
                ans = max(ans, no);
        }
    }
    else
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == 0)
            {
                Try(i+1);
            }
            else
            {
                if (!slot[j])
                {
                    slot[j] = 1;
                    no *= 10;
                    no += X[j];
                    Try(i+1);
                    no -= X[j];
                    no /= 10;
                    slot[j] = 0;
                }
            }
        }
    }

}

int findTheLargestPrime(std::vector<int> digits)
{
    isPrime();
    for (int k = 0; k < digits.size(); k++)
    {
        X[k+1] = digits[k];
    }
    n = digits.size();
    Try(0);
    return ans;
}

int main()
{
	vector <int> digits;
	digits = {8,7,7,6,2,4,2,1};
	cout<<findTheLargestPrime(digits)<<endl;
}
