#include <bits/stdc++.h>
using namespace std;

const int N = 1010;

int n, m;
int cnt;
int mark;
char ma[N][N];

bool check(int x, int y)
{
    int t = 0;

    for(int i = 0; i < n; i ++){
        if(ma[i][y] == '*'){
            t ++;
        }
    }
    for(int i = 0; i < m; i ++){
        if(ma[x][i] == '*'){
            t ++;
        }
    }
    if(ma[x][y] == '*'){
        t --;
    }
    //cout << t << endl;
    if(t == cnt){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int a, b;
    int x[N];
    int y[N];

    while(scanf("%d%d", &n, &m) == 2){
        mark = 0;
        cnt = 0;
        memset(x, 0, sizeof(x));
        memset(y, 0, sizeof(y));
        for(int i = 0; i < n; i ++){
            scanf("%s", ma[i]);
        }
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j ++){
                if(ma[i][j] == '*'){
                    cnt ++;
                }
            }
        }
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j ++){
                if(ma[i][j] == '*'){
                    x[i] ++;
                    y[j] ++;
                }
            }
        }
        for(int i = 0; i < n; i ++){
            if(mark){
                break;
            }
            for(int j = 0; j < m; j ++){
                                        cout << i << ' ';
                    cout << j << endl;
                    cout <<x[i] << ' ';
                    cout << y[j] << endl;
				cout<<ma[i][i]<<" "<<endl;
				cout<<mark<<endl;	
                if(ma[i][j] == '*'){
                    if(x[i] + y[j] - 1== cnt){
                        a = i + 1;
                        b = j + 1;
                        mark = 1;
                        break;
                    }
                }
                else{
                    if(x[i] + y[j] == cnt){
                        a = i + 1;
                        b = j + 1;
                        mark = 1;
                        break;
                    }
                }
            }
        }
        if(mark){
            printf("YES\n");
            printf("%d %d\n", a, b);
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
