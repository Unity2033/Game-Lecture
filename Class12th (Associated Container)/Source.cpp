#include "../Program/stdafx.h"
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

int main()
{
#pragma region 연관 컨테이너
    // 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

#pragma region set

    // std::set<const char*> set;
    // 
    // set.insert("League of Legend");
    // set.insert("Fortnite");
    // set.insert("Minecraft");
    // set.insert("Valorant");
    // 
    // for (const auto & element : set)
    // {
    //     cout << element << endl;
    // }
    // 
    // cout << "set empty : " << set.empty() << endl;
    // 
    // set.clear();
    // 
    // cout << "set size : " << set.size() << endl;
    // cout << "set max size : " << set.max_size() << endl;

#pragma endregion

#pragma region map

    // std::map<std::string, int> map;
    // 
    // map.insert({ "Elise Ronaune", 75 });
    // map.insert({ "Caesar", 25 });
    // map.insert({ "Blue-eyed Kalbasus", 35 });
    // map.insert({ "Scheherazade", 40 });
    // 
    // string name;
    // 
    // cin >> name;
    // 
    // if (map.count(name) > 0)
    // {
    //     map[name] += 10;
    // 
    //     for (auto & pair : map)
    //     {
    //         if (pair.first != name)
    //         {
    //             pair.second -= 10;
    //         }
    // 
    //         cout << pair.first << " : " << pair.second << endl;
    //     }
    // }
    // else
    // {
    //     cout << name << " does not exist in the data.\n" << endl;
    // }

#pragma endregion

#pragma region unordered set
    // 
    // unordered_set<const char*>  unordered_set;
    // 
    // unordered_set.reserve(16);
    // 
    // unordered_set.max_load_factor(2.0f);
    // 
    // unordered_set.insert("Doran's Ring");
    // unordered_set.insert("Doran's Blade");
    // unordered_set.insert("Doran's Shield");
    // unordered_set.insert("Frozen Heart");
    // unordered_set.insert("Sterak’s Gage");
    // unordered_set.insert("Randuin’s Omen");
    // unordered_set.insert("Knight’s Vow");
    // 
    // unordered_set.insert("Essence Reaver");
    // unordered_set.insert("Liandry’s Torment");
    // 
    // cout << "Load Factor : " << unordered_set.load_factor() << endl;
    // cout << "Bueckt Count : " << unordered_set.bucket_count() << endl;
    // 
    // if (unordered_set.find("Doran's Shield") != unordered_set.end())
    // {
    //     cout << "the data exists..." << endl;
    // }
    // else
    // {
    //     cout << "the data does not exits..." << endl;
    // }
    // 
    // unordered_set.erase("Knight’s Vow");
    // 
    // for (const char* element : unordered_set)
    // {
    //     cout << element << endl;
    // }

#pragma endregion

#pragma region unordered map

    //	unordered_map<std::string, int> unordered_map;
    //	
    //	unordered_map["Potion"] = 2;
    //	unordered_map["Elixir"] = 1;
    //	unordered_map["Antidote"] = 2;
    //	unordered_map["Oil"] = 3;
    //	
    //	string name;
    //	
    //	std::cin >> name;
    //	
    //	if (unordered_map.find(name) != unordered_map.end() && unordered_map[name] > 0)
    //	{
    //		unordered_map[name]--;
    //	
    //		cout << name << " use " << endl;
    //	
    //		if (unordered_map[name] <= 0)
    //		{
    //			unordered_map.erase(name);
    //	
    //			cout << name << "All the " << name << " has been used" << endl;
    //		}
    //	}
    //	else
    //	{
    //		cout << "Doesn't Exist." << endl;
    //	}
    //	
    //	for (const auto & element : unordered_map)
    //	{
    //		cout << "Name : " << element.first << " - Quantity : " << element.second << endl;
    //	}

#pragma endregion

#pragma endregion

    return 0;
}
