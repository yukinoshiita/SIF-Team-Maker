/**
  Project SIF Card Auto Assembler
  main.cpp
Purpose: Take a database of cards and assemble a proper team according to specified requirement.

Author sxt
Version 1.00  - 11/10/2020
*/
#include <iostream>
#include <deque>

#define SMILE 0
#define PURE 1
#define COOL 2
#define VALUE_FIRST 0
#define SKILL_FIRST 1
#define MIUS 0
#define AQOURS 1
#define STANDARD_NOTE 700

using namespace std;

struct Standard
{
	int color;
	int type;
	int group_name;
};

Card card_read(Standard standard){
	
}

Standard requirement_input(){
	Standard tmp;
	cout<<"Choose the color you want to make the team(0 for smile, 1 for pure and 2 for cool): "<<endl;
	cin>>tmp.color;
	cout<<"Choose the type of team(0 for value first, 1 for skill first): "<<endl;
	cin>>tmp.type;
	cout<<"Choose the group name(0 for μ's, 1 for Aqours): ">>endl;
	cin>>tmp.group_name;
	return tmp;
}

int main(){
	//guidance for requirement input
	Standard standard;
	standard=requirement_input();
	//read all the cards information
	deque<Card> card=card_read(standard);
}