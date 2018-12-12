#include <iostream>
#include <vector> 
using namespace std;
vector <int> v; //Khai báo vector
vector <int>::iterator it;  //Khai báo iterator
vector <int>::reverse_iterator rit; //Khai báo iterator ngý?c int i;
main() {
      for (int i=1;i<=5;i++) v.push_back(i); // v={1,2,3,4,5} cout << v.front() << endl;  // In ra 1
      cout << v.back() << endl;  // In ra 5

      cout << v.size() << endl;  // In ra 5

      v.push_back(9);  // v={1,2,3,4,5,9}
      cout << v.size() << endl;  // In ra 6

      v.clear();  // v={}
      cout << v.empty() << endl;  // In ra 1 (vector r?ng)

      for (int i=1;i<=5;i++) v.push_back(i); // v={1,2,3,4,5} v.pop_back();  // v={1,2,3,4}
      cout << v.size() << endl;  // In ra 4

      v.erase(v.begin()+1);  // Xóa pt? th? 1 v={1,3,4} v.erase(v.begin(),v.begin()+2);  // v={4}
      v.insert(v.begin(),100);  // v={100,4}
      v.insert(v.end(),5);  // v={100,4,5}

      /*Duy?t theo ch? s? ph?n t?*/
      for (int i=0;i<v.size();i++) cout << v[i] << " "; // 100 4 5 cout << endl;
 
      /*Chú ?: Không nên vi?t
      for (i=0;i<=v.size()-1;i++) ...
      V? n?u vector v r?ng th? s? d?n ð?n sai khi duy?t !!!
      */

      /*Duy?t theo iterator*/
      for (it=v.begin();it!=v.end();it++) cout << *it << " " ;
      //In ra giá tr? ma iterator ðang tr? t?i "100 4 5" cout << endl;

      /*Duy?t iterator ngý?c*/
      for (rit=v.rbegin();rit!=v.rend();rit++) cout << *rit << " "; // 5 4 100
      cout << endl;

      system("pause");
}
