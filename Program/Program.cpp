#include <iostream>	   
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

	return 0;
}
