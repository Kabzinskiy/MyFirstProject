#pragma once
#include "character.h"
#include <fstream>

using namespace std;
ostream& operator<< (ostream& fileOutputStream, const Character& objectOfCharacter);
istream& operator>> (istream& fileInputStream, Character& objectOfCharacter);
