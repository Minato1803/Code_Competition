#include <iostream>
using namespace std;
 
const int MAX = 1000005;
 
int f, s, g, u, d;          // Ch?a nh?ng th�ng tin v?i t�n tr�ng v?i d?u b�i cho
int Number[MAX];            // Luu s? l?n b?m n�t nh? nh?t d? di d?n m?i t?ng
 
// m?ng d�ng vai tr� l� h�ng d?i - queue,
// d? tri?n khai thu?t to�n t�m ki?m theo chi?u r?ng.
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
 
    // Cho t?ng d?u ti�n v�o h�ng d?i, gi� tr? s? l?n b?m n�t s? l� 0
    Number[start] = 0;
    Enqueue(start);
 
    while(leng > 0)
    {
        // L?n lu?t dequeue ra v� c?p nh?t tr?ng th�i m?i
        int tmp = Dequeue();
 
        // N?u g?p ph?i t?ng d�ch th� d?ng lu�n
        if(tmp == g) break;
 
        // N?u b?m l�n tr�n
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
    
    // comment d�ng n�y tru?c khi submit
//    freopen("input.txt","r",stdin);
 
    // nh?p th�ng tin d?u v�o, t�n bi?n gi?ng v?i d? b�i cho
    cin >> f >> s >> g >> u >> d;
    
    // kh?i t?o 
    for(int i = 1; i <= f; i++)
        Number[i] = -1;
 
    BFS(s);
 
    // N?u Number[g] == -1 nghia l� kh�ng th? di du?c t?i t?ng g
    if(Number[g] == -1) cout << "use the stairs" << endl;
    else cout << Number[g] << endl;
 
    return 0;
}
