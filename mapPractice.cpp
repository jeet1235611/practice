//https://www.youtube.com/watch?v=POYRev0zk2k
//C++ Tutorial for Beginners 45 - C++ Map
//ProgrammingKnowledge

#include <iostream>
#include <map>
using namespace std;
int main() {
map<int, string> name_map;
name_map[1] = "Tom";
name_map[2] = "Max";
name_map[3] = "Mark";
//name_map[4] = "John";
name_map[4] = "John sgs";
name_map[5] = "Patrick";

name_map.insert(pair<int, string>(6, "Jauly"));
name_map.insert(pair<int, string>(7, "Jack"));

map<int, string>::iterator it = name_map.find(5);
name_map.erase(it);
//cout << "Key found = " << it -> second << endl;

//name_map.clear();
cout << name_map[4] << endl;

cout << " Map size = " << name_map.size() << endl;
name_map.clear();
cout << "is empty = " << name_map.empty() << endl;
for(map<int, string>::iterator it = name_map.begin(); it != name_map.end(); it++){
	cout << it->first << " => " << it->second << endl;
}
return 0;

}
