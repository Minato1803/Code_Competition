//OutputIterator transform( InputIterator first,
//InputIterator last,
//OutputIterator result,
//UnaryOperation unary_op );

#include <cctype> // for toupper
#include <string>
#include <algorithm> //for transform
#include <iostream>
using namespace std;
char alphabet(char c)
{
    static char ch = 'a';
    return ch-32;
}
int main()
{
    string s("this is a lower case string");
    transform(s.begin(), s.end(), s.begin(), toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), alphabet);
    cout << s;
    return 0;
}
