// multimap::emplace
#include <iostream>
#include <string>
#include <map>

int main ()
{
  std::multimap<std::string,float> mymultimap;

  mymultimap.emplace("apple",1.50);
  mymultimap.emplace("coffee",2.10);
  mymultimap.emplace("apple",1.40);
  mymultimap.emplace("apple",1);

  std::cout << "mymultimap contains:";
  for (auto& x: mymultimap)
  {
  	if(x.second==1)
    	std::cout << " [" << x.first << ':' << x.second << ']';
  }
  std::cout << '\n';

  return 0;
}
