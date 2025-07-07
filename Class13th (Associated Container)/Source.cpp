#include <iostream>	
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main()
{
#pragma region unordered set

	//	std::unordered_set<const char*> unordered_set;
	//	
	//	unordered_set.max_load_factor(2.0);
	//	
	//	unordered_set.insert("Messi");
	//	unordered_set.insert("Hazard");
	//	unordered_set.insert("Ronaldo");
	//	unordered_set.insert("Alisson");
	//	unordered_set.insert("Van Dijk");
	//	unordered_set.insert("Harry Kane");
	//	unordered_set.insert("Toni Kroos");
	//	unordered_set.insert("Kyle Walker");
	//	unordered_set.insert("Son Heung Min");
	//	
	//	cout << "Load Factor : " << unordered_set.load_factor() << endl;
	//	cout << "Bucket Count : " << unordered_set.bucket_count() << endl;
	//	
	//	if (unordered_set.find("Hazard") != unordered_set.end())
	//	{
	//		cout << "the data exists..." << endl;
	//	}
	//	else
	//	{
	//		cout << "the data does not exist..." << endl;
	//	}
	//	
	//	unordered_set.erase("Messi");
	//	
	//	for (const char * element : unordered_set)
	//	{
	//		cout << element << endl;
	//	}


#pragma endregion

#pragma region unordered map

	//	std::unordered_map<const char*, int> unordered_map;
	//	
	//	unordered_map.insert({ "Zhonya’s Hourglass",2900});
	//	unordered_map.insert({ "Sterak’s Gage",3100 });
	//	unordered_map.insert({ "Trinity Force",3333 });
	//	unordered_map.insert({ "Gargoyle Stoneplate",3300 });
	//	unordered_map.insert({ "Bloodthirster",3400 });
	//	
	//	unordered_map.insert({ "Bloodthirster",3400 });
	//	
	//	cout << "unordered_map size : " << unordered_map.size() << endl;
	//	
	//	unordered_map.erase("Trinity Force");
	//	
	//	for (const auto & element : unordered_map)
	//	{
	//		cout << "Key : " << element.first << endl;
	//		cout << "Value : " << element.second << endl;
	//	}
	//	
	//	unordered_map.clear();
	//	
	//	cout << "Load Factor : " << unordered_map.load_factor() << endl;

#pragma endregion

#pragma region set

	//	std::set<const char*> set;
	//	
	//	set.insert("League of Legends");
	//	set.insert("Fortnite");
	//	set.insert("Minecraft");
	//	set.insert("Valorant");
	//	set.insert("Among Us");
	//	
	//	for (const auto & element : set)
	//	{
	//		cout << element << endl;
	//	}
	//	
	//	cout << "set empty : " << set.empty() << endl;
	//	
	//	set.clear();
	//	
	//	cout << "set size : " << set.size() << endl;
	//	cout << "set max size : " << set.max_size() << endl;

#pragma endregion

#pragma region map

	//	std::map<const char*, const char*> map;
	//	
	//	map.insert({ "월요일", "Monday"});
	//	map.insert({ "화요일", "Tuesday" });
	//	map.insert({ "수요일", "Wednesday" });
	//	map.insert({ "목요일", "Thursday" });
	//	map.insert({ "금요일", "Friday" });
	//	
	//	if (map.find("월요일") != map.end())
	//	{
	//		cout << "the data exists..." << endl;
	//	}
	//	else
	//	{
	//		cout << "the data does not exist..." << endl;
	//	}
	//	
	//	for (const auto& element : map)
	//	{
	//		cout << "KEY : " << element.first << endl;
	//		cout << "VALUE : " << element.second << endl;
	//	}

#pragma endregion

	return 0;
}
