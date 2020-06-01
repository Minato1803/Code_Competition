#include <iostream>

using namespace std;

//write a function a find the most appeared element in an array
int mostAppearedElement(int a[], int n)
{
    int Count[105] ={0};
    int Max = 0;
    for(int i = 0;i<n;i++)
    {
        Count[a[i]]++;
    }
    for(long i = 0;i<=100;i++)
    {
    	if(i == 4)
    	{
    		Max > Count[i]?cout<<Max<<" " : cout<<0<<" ";
		}
        if(Max <= Count[i])
        {
            Max = i;
        }
        else
        {
        	cout<<Count[i]<<" "<<i<<endl;
        	
		}
    }
    return Max;
}

int main()
{
    int n, a[100];
    cin >> n;
    
    for (int i=0; i<n; i++)
        cin >> a[i];
   
    int res = mostAppearedElement(a,n);
    cout << res << endl;
}
