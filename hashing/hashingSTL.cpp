			#include<bits/stdc++.h>
			using namespace std;


			int main(int argc, char const *argv[]) {

			unordered_map<string ,int> map;

			map["Sanjeet"]=10;
			map["Vansh"]=20;
			map["Pranesh"]=30;


			// inserting value by insert function
			map.insert(make_pair("JJ",40));

		 //iterate through map for c times and print c.first i.e., key and c.second i.e., value

			for (auto c:map) {
			std::cout << c.first << ","<< c.second <<'\n';
			}

		   // Search a key in unordered_map with find() STL;
	   string key = "JJl";

		    // If key not found in map iterator to end is returned
		    if (map.find(key) == map.end())
		        cout << key << " not found\n\n";

		    // If key found then iterator to that key is returned
		    else
		        cout << "Found " << key << "\n\n";

			return 0;
			}
