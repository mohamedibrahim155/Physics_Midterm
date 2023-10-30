#pragma once
#include "CharacterType.h"
#include "EnemyTyper.h"

class CharacterFactory
{
public:
	CharacterFactory();
	~CharacterFactory();

	virtual CharacterType* CreateCharacter() = 0;
	virtual EnemyType* CreateEnemyType()=0;



private:

};

CharacterFactory::CharacterFactory()
{
}

CharacterFactory::~CharacterFactory()
{
}