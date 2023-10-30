#pragma once
#include <iostream>
#include "CharacterCreator.h"

class CharacterType : public CharacterCreator
{
public:
	CharacterType();
	~CharacterType();

      void Characterinfo() override;



private:

};

CharacterType::CharacterType()
{
}

CharacterType::~CharacterType()
{
}

inline void CharacterType::Characterinfo()
{

	std::cout << "Player Has Created" << std::endl;


}
