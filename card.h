#ifndef _CARD_H_
#define _CARD_H_
#include "skill.h"
class card
{
public:
	card();
	~card();

private:
	int grade;
	int mini_unit;
	int color;
	int value;
	Skill skill;
};
#endif