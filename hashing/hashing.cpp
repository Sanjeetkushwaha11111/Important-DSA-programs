#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {

   unordered_map<string,int> map;

   map["Sanjeet"]=10;
   map["Vansh"]=20;

   std::cout << map["Sanjeet"] << '\n';
   std::cout << map.size() << '\n';
  /// map.erase("Sanjeet");
   std::cout << map.size() << '\n';
   std::cout << map["Golu"] << '\n';
   std::cout << map.size() << '\n';


  return 0;
}
