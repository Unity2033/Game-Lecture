#include <iostream>	   
#include <unordered_set>


using namespace std;

int main()
{
#pragma region unordered set

	std::unordered_set<const char *> unordered_set;

	unordered_set.max_load_factor(2.0);

	unordered_set.insert("Messi");
	unordered_set.insert("Hazard");
	unordered_set.insert("Ronaldo");
	unordered_set.insert("Ronaldo1");
	unordered_set.insert("Ronaldo2");
	unordered_set.insert("Ronaldo3");
	unordered_set.insert("Ronaldo4");
	unordered_set.insert("Ronaldo5");
	unordered_set.insert("Ronaldo6");

	cout << "Bucket Count : " << unordered_set.bucket_count() << endl;

	for (const char * element : unordered_set)
	{
		cout << element << endl;
	}


#pragma endregion



	return 0;
}
