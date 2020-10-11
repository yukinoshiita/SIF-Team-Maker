#ifndef _SKILL_H_
#define _SKILL_H_
enum Skill_type {point, judge, health};
enum Trigger_type {perfect, note, combo, star, time};
struct Skill
{
    enum Skill_type skill_type;
    enum Trigger_type trigger_type;
    int level;//from 1 to 8
    int trigger_possibility;
    int trigger_requirement;
    int effect;
};
#endif