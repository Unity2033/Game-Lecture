#pragma once
class Character
{
private:
	weak_ptr<Character> character;

public:
	Character();

	void RecruitTeammate(const weak_ptr<Character> & clone);

	~Character();
};

