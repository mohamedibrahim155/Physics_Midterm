#pragma once
#include <iostream>
#include "CharacterCreator.h"

class EnemyType : public CharacterCreator
{
public:
	EnemyType();
	~EnemyType();

	void Characterinfo() override;



private:

};

EnemyType::EnemyType()
{
}

EnemyType::~EnemyType()
{
}

inline void EnemyType::Characterinfo()
{

	std::cout << "Enemy Has Created" << std::endl;


}
