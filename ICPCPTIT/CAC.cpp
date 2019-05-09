#include <bits/stdc++.h>

//#define MULTI_TEST RAVENCLAW
#define fi first
#define se second
#define whatIs(a) cout << #a " is " << (a) << endl;

using namespace std;

typedef pair<long long, long long> pt;

const int N = 505;
const long long base = 1e9+7;
const long long inf = 1e18+7;
clock_t t1,t2;
long long n, m, k;
long long a[N][N], b[N][N];

int find(int &u, int &v) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j]) {
                u = i;
                v = j;
                return 1;
            }
        }
    }
    return 0;
}

int findR(int u, int v) {
    for (int i = v + 1; i < m; i++)
        if (a[u][i]) {
        	whatIs(a[u][i]);
            return i;
        }
    return -1;
}

int findD(int u, int v) {
    for (int i = u + 1; i < n; i++)
        if (a[i][v]) {
            return i;
        }
    return -1;
}

void Input () {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
}

void Solve () {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = (a[i][j] != b[i][j]);
        }
    }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << a[i][j] << " \n"[j == m-1 ? 1 : 0];
//         }
//     }
    int ans = 1;
    while (1) {
        int u, v;
        if (!find(u, v)) {
            break;
        }
        int r = findR(u, v);
        if (r == -1) {
            ans = 0;
            break;
        }
        int l;
        int l1 = findD(u, v);
        if (l1 >= 0) l = l1;
        else l = findD(u, r);
        if (l == -1) {
            ans = 0;
            break;
        }
        a[u][v] = 1 - a[u][v];
        a[u][r] = 1 - a[u][r];
        a[l][v] = 1 - a[l][v];
        a[l][r] = 1 - a[l][r];
    }
    if (ans) cout << "Yes";
    else cout << "No";
}

main () {
    //cerr << "Program is running" << endl;
    t1 = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef MULTI_TEST
    int t; cin >> t;
    while (t--) {
        Input();
        Solve();
    }
    #else
    Input();
    Solve();
    #endif
    t2 = clock();
    float diff ((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;
    cerr << "\nRunning in " << seconds << " seconds" << endl;
}
