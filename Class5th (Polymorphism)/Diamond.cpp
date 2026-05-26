#include "Diamond.h"

Diamond::Diamond()
{
	weight = 2.5f;
	hardness = 3.5f;
	name = "Diamond";
}


void Diamond::Describe()
{
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;
	cout << "Hardness : " << hardness << endl;
}

void Diamond::Promote()
{
	cout << "Katarina" << endl;
	cout << "Essence Shard" << endl;
	cout << "Diamond Boader" << endl;
	cout << "Eternals Capsule\n" << endl;

}

Diamond::~Diamond()
{
	cout << "Release a Diamond" << endl;
}
