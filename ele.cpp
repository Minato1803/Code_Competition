#include <iostream>
using namespace std;
 
const int MAX = 1000005;
 
int f, s, g, u, d;          // Ch?a nh?ng thông tin v?i tên trùng v?i d?u bài cho
int Number[MAX];            // Luu s? l?n b?m nút nh? nh?t d? di d?n m?i t?ng
 
// m?ng dóng vai trò là hàng d?i - queue,
// d? tri?n khai thu?t toán tìm ki?m theo chi?u r?ng.
int queue[MAX];
int fr, re, leng;
 
void Enqueue(int id)
{
    queue[re] = id;
    re = (re + 1) % MAX;
    leng++;
}
 
int Dequeue()
{
    int t = queue[fr];
    fr = (fr + 1) % MAX;
    leng--;
    return t;
}
 
void BFS(int start)
{
    fr = re = leng = 0;
 
    // Cho t?ng d?u tiên vào hàng d?i, giá tr? s? l?n b?m nút s? là 0
    Number[start] = 0;
    Enqueue(start);
 
    while(leng > 0)
    {
        // L?n lu?t dequeue ra và c?p nh?t tr?ng thái m?i
        int tmp = Dequeue();
 
        // N?u g?p ph?i t?ng dích thì d?ng luôn
        if(tmp == g) break;
 
        // N?u b?m lên trên
        if (tmp + u <= f && Number[tmp + u] == -1) 
        {
            Number[tmp + u] = Number[tmp] + 1;
            Enqueue(tmp + u);
        }
 
        // N?u b?m xu?ng du?i
        if (tmp - d >= 1 && Number[tmp - d] == -1)
        {
            Number[tmp - d] = Number[tmp] + 1;
            Enqueue(tmp - d);
        }
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    
    // comment dòng này tru?c khi submit
//    freopen("input.txt","r",stdin);
 
    // nh?p thông tin d?u vào, tên bi?n gi?ng v?i d? bài cho
    cin >> f >> s >> g >> u >> d;
    
    // kh?i t?o 
    for(int i = 1; i <= f; i++)
        Number[i] = -1;
 
    BFS(s);
 
    // N?u Number[g] == -1 nghia là không th? di du?c t?i t?ng g
    if(Number[g] == -1) cout << "use the stairs" << endl;
    else cout << Number[g] << endl;
 
    return 0;
}
